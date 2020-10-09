#ifndef __ACCOUNTS_H
#define __ACCOUNTS_H

#define BALANCE_LIMIT 1000000

enum QueryStatus {
	ID_NOT_EXIST = 0,
	INVALID_INPUT,
	INVALID_BALANCE,
	SUCCESS,
};

class Account {
private:
	int id, balance;
public:
	Account();
	Account(int);
	
	int getId();
	int getBalance();

	void setId(int);
	void setBalance(int);
};

class AccountManager {
private:
	int cnt = 0;
	Account ac[10];
	
	bool checkBalance(int);
public:
	int getLastId();
	int getBalance(int);
	QueryStatus createAccount();
	QueryStatus deposit(int, int);
	QueryStatus withdraw(int, int);
	QueryStatus transfer(int, int, int);
};

#endif
