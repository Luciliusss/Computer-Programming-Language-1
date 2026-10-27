#include <stdio.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(void)
{
    int choice = 0;
    float balance = 0.0f;

    printf("*** WELCOME TO THE BANK*** ");

    do
    {
        printf("\nSelect an option:\n");
        printf("\n1. Check balance\n");
        printf("2. Deposit money\n");
        printf("3. Withdraw money\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;
        case 2:
            balance += deposit();
            break;
        case 3:
            balance -= withdraw(balance);
            break;
        case 4:
            printf("\nThank you for using the bank!");
            break;

        default:
            printf("\n Invalid choice! please select 1 - 4 ");
            break;
        }

    } while (choice != 4);

    return 0;
}

void checkBalance(float balance)
{
    printf("\nYour current balance is: $%.2f\n", balance);
}

float deposit()
{
    float amount = 0.0f;
    printf("\nEnter amount of deposit: $");

    if (amount < 0)
    {
        printf("Invalid amount\n");
        return 0.0f;
    }
    else
    {
        printf("Successfully deposited $%.2f", amount);
        return amount;
    }

    return 0.0f;
}

float withdraw(float balance)
{
    return 0.0f;
}