#include<stdio.h>
#include<math.h>

int main() {
int n;
int choice;
    
printf("WELCOME TO FOODIES\n");
printf("let's get started\n our menu includes the following Items :\n");

    while(1) {

        printf("1.Burger\n 2.pizza\n 3.pasta\n 4.sandwich\n 5.French fries\n Please let us know what you are craving for !! :\n");
        scanf("%d\n", &n);
        
    }
    
    switch (choice) {

        case 1: printf("you ordered Burger :  \n");
        break;

        default : printf("invalid option \n");
    }

    return 0;
}