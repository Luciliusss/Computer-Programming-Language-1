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
        printf("\n2. Deposit money\n");
        printf("\n3. Withdraw money\n");
        printf("\n4. Exit\n");
        printf("\n4. Enter your choice: ");
        scanf("%d", &choice);

    } while (choice != 4);

    return 0;
}

void checkBalance(float balance)
{
}

float deposit()
{
    return 0.0f;
}

float withdraw(float balance)
{
    return 0.0f;
}