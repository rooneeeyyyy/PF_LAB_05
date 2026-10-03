/*Task 10: Bank Transaction Menu
Write a program simulating a simple ATM menu using nested switch-case statements. The outer switch
should let the user choose an account type: '1' for Savings or '2' for Current. Inside each account type's case,
use an inner switch to let the user choose a transaction: '1' for Deposit, '2' for Withdraw, or '3' for Check
Balance, and print a message describing the action performed for that specific account type and transaction
combination. Add default cases at both levels to handle invalid choices.*/
#include<stdio.h>

int main(){
    int account,transaction;
    float balance=5000,amount;
    printf("Enter 1 for Savings Account\n");
    printf("Enter 2 for Current Account\n");
    scanf("%d",&account);
    switch(account){
        case 1:
            printf("Enter 1 for Deposit\n");
            printf("Enter 2 for Withdraw\n");
            printf("Enter 3 for Check Balance\n");
            scanf("%d",&transaction);
            switch(transaction){
                case 1:
                    printf("How much amount do you want to deposit: ");
                    scanf("%f",&amount);
                    balance=balance+amount;
                    printf("Deposit performed in Savings Account\n");
                    printf("Current Balance = %.2f",balance);
                    break;
                case 2:
                    printf("How much amount do you want to withdraw: ");
                    scanf("%f",&amount);
                    balance=balance-amount;
                    printf("Withdrawal performed from Savings Account\n");
                    printf("Current Balance = %.2f",balance);
                    break;
                case 3:
                    printf("Current Balance = %.2f",balance);
                    break;

                default:
                    printf("Invalid transaction");
            }
            break;
        case 2:
            printf("Enter 1 for Deposit\n");
            printf("Enter 2 for Withdraw\n");
            printf("Enter 3 for Check Balance\n");
            scanf("%d",&transaction);

            switch(transaction){
                case 1:
                    printf("How much amount do you want to deposit: ");
                    scanf("%f",&amount);
                    balance=balance+amount;
                    printf("Deposit performed in Current Account\n");
                    printf("Current Balance = %.2f",balance);
                    break;
                case 2:
                    printf("How much amount do you want to withdraw: ");
                    scanf("%f",&amount);
                    balance=balance-amount;
                    printf("Withdrawal performed from Current Account\n");
                    printf("Current Balance = %.2f",balance);
                    break;
                case 3:
                    printf("Current Balance = %.2f",balance);
                    break;
                default:
                    printf("Invalid transaction");
            }
            break;
        default:
            printf("Invalid account type");
    }
    return 0;
}