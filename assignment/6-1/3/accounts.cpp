#include "accounts.h"
Account::Account() {
	this->id = -1;
	this->balance = 0;
}
Account::Account(int id) {
	this->id = id;
	this->balance = 0;
}
int Account::getId() {
	return this->id;
}
int Account::getBalance() {
	return this->balance;
}
void Account::setId(int id) {
	this->id = id;
}
void Account::setBalance(int balance) {
	this->balance = balance;
}

int AccountManager::getLastId() {
	return this->cnt - 1;
}
int AccountManager::getBalance(int id) {
	return ac[id].getBalance();
}
QueryStatus AccountManager::createAccount() {
	if (cnt > 9) return INVALID_INPUT;
	ac[cnt] = { cnt };
	++cnt;
	return SUCCESS;
}
QueryStatus AccountManager::deposit(int id, int diff) {
	if (id < 0 || id >= cnt) return ID_NOT_EXIST;
	if (diff < 0) return INVALID_INPUT;
	if (checkBalance(ac[id].getBalance() + diff)) {
		ac[id].setBalance(ac[id].getBalance() + diff);
	} else return INVALID_BALANCE;
	return SUCCESS;
}
QueryStatus AccountManager::withdraw(int id, int diff) {
	if (id < 0 || id >= cnt) return ID_NOT_EXIST;
	if (diff < 0) return INVALID_INPUT;
	if (checkBalance(ac[id].getBalance() - diff)) {
		ac[id].setBalance(ac[id].getBalance() - diff);
	} else return INVALID_BALANCE;
	return SUCCESS;
}
QueryStatus AccountManager::transfer(int id1, int id2, int diff) {
	if (id1 < 0 || id2 < 0 || id1 >= cnt || id2 >= cnt) return ID_NOT_EXIST;
	if (diff < 0) return INVALID_INPUT;
	if (checkBalance(ac[id1].getBalance() - diff) && checkBalance(ac[id2].getBalance() + diff)) {
		ac[id1].setBalance(ac[id1].getBalance() - diff);
		ac[id2].setBalance(ac[id2].getBalance() + diff);
	} else return INVALID_BALANCE;
	return SUCCESS;
}

bool AccountManager::checkBalance(int balance) {
	return balance >= 0 && balance <= BALANCE_LIMIT;
}
