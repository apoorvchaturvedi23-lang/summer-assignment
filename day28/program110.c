#include <stdio.h>
#include <string.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

struct Bank account;

// Create Account
void createAccount() {
    printf("\nEnter Account Number: ");
    scanf("%d", &account.accNo);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    printf("\nAccount Created Successfully!\n");
}

// Deposit Money
void deposit() {
    float amount;

    printf("\nEnter Amount to Deposit: ");
    scanf("%f", &amount);

    account.balance += amount;

    printf("Amount Deposited Successfully!\n");
}

// Withdraw Money
void withdraw() {
    float amount;

    printf("\nEnter Amount to Withdraw: ");
    scanf("%f", &amount);

    if (amount > account.balance) {
        printf("Insufficient Balance!\n");
    } else {
        account.balance -= amount;
        printf("Withdrawal Successful!\n");
    }
}

// Check Balance
void checkBalance() {
    printf("\nCurrent Balance: %.2f\n", account.balance);
}

// Display Account Details
void displayAccount() {
    printf("\n------ Account Details ------\n");
    printf("Account Number : %d\n", account.accNo);
    printf("Account Holder : %s\n", account.name);
    printf("Balance        : %.2f\n", account.balance);
}

int main() {
    int choice;

    do {
        printf("\n===== Bank Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display Account Details\n");
        printf("6. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createAccount();
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                checkBalance();
                break;

            case 5:
                displayAccount();
                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 6);

    return 0;
}