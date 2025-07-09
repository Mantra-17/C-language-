#include <stdio.h>

float swapBalances(float *account1Balance, float *account2Balance){
    int temp = *account1Balance;
    *account1Balance =*account2Balance;
    *account2Balance = temp;
return (*account1Balance,*account2Balance);
}
int main(){
      float account2Balance,account1Balance;
     printf("Enter the balance in your first account :");
     scanf("%f",&account1Balance);
    printf("\nEnter the balance in your second account :");
     scanf("%f",&account2Balance);
    printf("Before swapping:\n");
    printf("Account 1 Balance: %.2f\n", account1Balance);
    printf("Account 2 Balance: %.2f\n", account2Balance);


    swapBalances(&account1Balance, &account2Balance);

    printf("\nAfter swapping:\n");
    printf("Account 1 Balance: %.2f\n", account1Balance);
    printf("Account 2 Balance: %.2f\n", account2Balance);

    printf("THANKYOU!!");
     return 0;
}