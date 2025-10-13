#include <stdio.h>

int main()
{
    int amt, bal = 1000, ch;

    printf("\nChoices:");
    printf("\n1. Check Balance");
    printf("\n2. Deposit");
    printf("\n3. Withdraw");
    printf("\nEnter choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
        case 1:
            printf("\nCurrent Balance: %d", bal);
            break;

        case 2:
            printf("\nEnter amount to deposit: ");
            scanf("%d", &amt);
            bal += amt;
            printf("\nDeposit Successful!");
            printf("\nCurrent Balance: %d", bal);
            break;

        case 3:
            printf("\nEnter amount to withdraw: ");
            scanf("%d", &amt);
            if (amt <= bal)
            {
                bal -= amt;
                printf("\nWithdrawal Successful!");
                printf("\nCurrent Balance: %d", bal);
            }
            else
            {
                printf("\nInsufficient Balance!");
            }
            break;

        default:
            printf("\nInvalid Choice!");
            break;
    }

    return 0;
}