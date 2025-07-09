#include<stdio.h>

int main() {

    int m=21;
    int u;
    int c; 
    printf("WELCOME TO MATCHSTICKS GAME !!\n");

    while(m>0) {
        printf("Hey player make your choice between 1-4 :");
        scanf("%d", &u);

        m=m-u;
        printf("Total %d matchsticks are left \n", m);

        if(u<4||u>=1) {
            printf("its coputer's turn!!");
            c=5-u;
            printf("computer picks %d matchsticks\n", c);

            m=m-c;
            printf("now %d matchsticks are left\n", m);
        
        }
            if(m==1) {
                printf("now %dmatchsticks are left \n", m);
                printf("you are forced to pick the last matchsticks\n Sorry you lost !!");
            }
    }
    return 0;

    }

    
