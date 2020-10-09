#include "accounts.h"
#include <cstdio>
int main() {
	AccountManager am;
	for (; ;) {
		char q;
		puts("\nJob?");
		scanf(" %c", &q);
		if (q == 'N') {
			int newId;
			switch (am.createAccount()) {
			case INVALID_INPUT:
				printf("Failure: can't create more than 10 accounts\n");
				break;
			case SUCCESS:
				newId = am.getLastId();
				printf("Account for user %d registered\n", newId);
				printf("Balance of user %d: %d\n", newId, am.getBalance(newId));
				break;
			}
		} else if (q == 'D') {
			int id, balance;
			scanf("%d%d", &id, &balance);
			switch (am.deposit(id, balance)) {
			case ID_NOT_EXIST:
				printf("Account does not exist\n");
				break;
			case INVALID_INPUT:
				printf("Failure: Invalid Input\n");
				break;
			case INVALID_BALANCE:
				printf("Failure: Deposit from user %d %d\n", id, balance);
				printf("Balance of user %d: %d\n", id, am.getBalance(id));
				break;
			case SUCCESS:
				printf("Success: Deposit to user %d %d\n", id, balance);
				printf("Balance of user %d: %d\n", id, am.getBalance(id));
				break;
			}
		} else if (q == 'W') {
			int id, balance;
			scanf("%d%d", &id, &balance);
			switch (am.withdraw(id, balance)) {
			case ID_NOT_EXIST:
				printf("Account does not exist\n");
				break;
			case INVALID_INPUT:
				printf("Failure: Invalid Input\n");
				break;
			case INVALID_BALANCE:
				printf("Failure: Withdraw from user %d %d\n", id, balance);
				printf("Balance of user %d: %d\n", id, am.getBalance(id));
				break;
			case SUCCESS:
				printf("Success: Withdraw from user %d %d\n", id, balance);
				printf("Balance of user %d: %d\n", id, am.getBalance(id));
				break;
			}
		} else if (q == 'T') {
			int id1, id2, balance;
			scanf("%d%d%d", &id1, &id2, &balance);
			switch (am.transfer(id1, id2, balance)) {
			case ID_NOT_EXIST:
				printf("Account does not exist\n");
				break;
			case INVALID_INPUT:
				printf("Failure: Invalid Input\n");
				break;
			case INVALID_BALANCE:
				printf("Failure: Transfer from user %d to user %d %d\n", id1, id2, balance);
				printf("Balance of user %d: %d\n", id1, am.getBalance(id1));
				printf("Balance of user %d: %d\n", id2, am.getBalance(id2));
				break;
			case SUCCESS:
				printf("Success: Transfer from user %d to user %d %d\n", id1, id2, balance);
				printf("Balance of user %d: %d\n", id1, am.getBalance(id1));
				printf("Balance of user %d: %d\n", id2, am.getBalance(id2));
				break;
			}
		} else break;
	}
	return 0;
}
