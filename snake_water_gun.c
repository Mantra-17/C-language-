#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    srand(time(0));
    int player, computer = rand() % 3;
    /*
    0->stone
    1->paper
    2->scissor
    */
   int count = 0;
 while(count<=5)
    {
    printf("Choose:\n 0 for stone\n 1 for paper\n 2 for scissor\n 3 for exit\n");
     if(player == 3){
        break;
        }
    
    scanf("%d", &player);
    printf("computer choose %d\n", computer);
   
        if(player == 0 && computer == 0)
        {
            printf("%c%cIt's a draw!!%c%c\n", 1,2,1,2);
        }
        else if (player == 0 && computer == 1)
        {
            printf("%c%cComputer Wins%c%c\n", 1,3,1,3);
        }
        else if (player == 0 && computer == 2)
        {
            printf("%c%cPlayer Wins%c%c\n", 3,4,3,4);
        }
        else if (player == 1 && computer == 0)
        {
         printf("%c%cPlayer Wins%c%c\n", 3,4,3,4);   
        }
        else if (player == 1 && computer == 1)
        {
            printf("%c%cIt's a draw!!%c%c\n", 1,2,1,2);
        }
        else if (player == 1 && computer == 2)
        {
            printf("%c%cComputer Wins%c%c\n", 1,3,1,3);
        }
        else if (player == 2 && computer == 0)
        {
            printf("%c%cComputer Wins%c%c\n", 1,3,1,3);
        }
        else if (player == 2 && computer == 1)
        {
            printf("%c%cPlayer Wins%c%c\n", 3,4,3,4);
        }
        else if (player == 2 && computer == 2)
        {
            printf("%c%cIt's a draw!!%c%c\n", 1,2,1,2);
        }
        else{
            printf("Something was wrong!!\n");
        }
        count++;
         if(count==5){
        break;
    }
    }
   
    
    return 0;
}
