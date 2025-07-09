#include<stdio.h>
int main()
{
    int rows;
    int col;
    int reserved;

    char arr[6][11];

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1;j <= 10;j++)
        {

            arr[i][j] = 'O';
             
        }
    }
     printf("enter the number of seats you want to reserve :");
    scanf("%d", &reserved);
    
    
    for(int i=0;i<reserved;i++) {
         printf("enter the number of row and coloumn :");
    scanf("%d %d", &rows, &col);
    arr[rows][col] = 'X';
    }

      
        

    for (int i = 1; i <= 5; i++) {
    
        for (int j = 1; j <= 10; j++)
        {
            printf("%c\t", arr[i][j]);

    
        }
        printf("\n");
    }
}