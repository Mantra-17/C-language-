#include<stdio.h>

int main() {
    printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c ", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);
    int n;
    int choice;
    int crave[5];
    int wowburger=0,wowsandwich=0,wowpizza=0,wowfrenchfries=0,wowpasta=0;
    int total=0;
int gst;
    printf("\n%c%cWELCOME TO FOODIES\n%c", 4,4);
    printf("%clet's get started !!   \n%c", 4,4);


    while(1) {
 printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c ", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);
        printf("\n%c %c Here is the menu :\n%c %c1.Burger-150rs\n%c %c2.Pizza-200rs\n%c %c3.Pasta-120rs\n%c %C4.Sandwich-100rs\n%c %c5.French Fries-80rs\n%c %cplease enter '0' to exit the menu\n%c %cLet us Know what you are craving for:\n", 3,3,1,1,4,4,3,1,4,1,4,3,4,3,3,4);
        scanf("%d", &choice);
if(choice == 0) {
    printf("%c %cDear sir/mam your ordered has been confirmed\n%c %cPlease wait we will reach you soon!!\n%c %c", 1,4,3,3,4,3,3,4);
    break;
}

        switch (choice) {
            case 1 : printf("%c %cyou order a single burger \n%c %clet us Know how many quantity you needed :\n%c %c", 1,4,3,4,3);
            scanf("%d", &crave[0]);
           
           printf("%d\n", wowburger=crave[0]*150);
            total+=wowburger;
              printf("your current total is : %d\n", total);
               printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);
             printf("%c %c\nAnything else ?\n%c %c", 1,4,3,4,3,4);
             
            break;
            case 2 : printf("%c %cyou order a single Pizza \n%c %clet us Know how many quantity you needed :\n%c %c", 3,3,4,1,3);
            scanf("%d", &crave[1]);
            printf("%d\n", wowpizza=crave[1]*200);
            total+=wowpizza;
           printf("your current total is : %d\n", total);
            printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);
          printf("\n%c %cAnything else ?\n%c %c", 1,4,3,4,3,4);
          
            break;
            case 3 : printf("%c %cyou order a single Pasta \n%c %clet us Know how many quantity you needed :\n%c %c", 1,3,4,4,3,3,1,4);
            scanf("%d", &crave[2]);
            printf("%d\n", wowpasta=crave[2]*120);
            total+=wowpasta;
              printf("your current total is : %d\n", total);
               printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);
             printf("\n%c %cAnything else ?\n%c %c", 1,4,3,4,3,4);

             
            break;
            case 4 : printf("%c %cyou order a single Sandwich \n%c %clet us Know how many quantity you needed :\n%c %c", 1,4,3,4,4,3,3,1,1);
            scanf("%d", &crave[3]);
            printf("%d\n", wowsandwich=crave[3]*100);
            total+=wowsandwich;
              printf("your current total is : %d\n", total);
               printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);
             printf("\n%c %cAnything else ?\n%c %c", 1,4,3,4,3,4);
             
            break;
            
            case 5 : printf("%c %cyou order a single French Fries \n%c %clet us Know how many quantity you needed :\n%c %c", 1,4,3,3,4,3,4,3,3,4);
            scanf("%d", &crave[4]);
            printf("%d\n", wowfrenchfries=crave[4]*80);
            total+=wowfrenchfries;
              printf("your current total is : %d\n", total);
               printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);
            printf("\n%c %cAnything else ?\n%c %c", 1,4,3,4,3,4);
             
            break;
          
            default : printf("%c %coops Invalid result\n%c %c", 4,3,3,1,1);
            

           

        }  
        


    }
     printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c \n", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);

    printf("burger : %d\n",  wowburger);
    printf("Pizza : %d\n", wowpizza);
    printf("pasta : %d\n", wowpasta);
    printf("Sandwich : %d\n",wowsandwich  );
    printf("French Fries : %d\n",wowfrenchfries );

     printf("gst = 18PR\n");

    printf("Your Total cost is :%d\n", gst=total+(0.18*total));
printf("%c %cThankyou !!\n%c %cVisit Again!!\n%c %c", 1,4,3,3,4,3,3,3);
printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c ", 4,1,3,4,3,4,4,1,3,4,3,4,1,3,4,4,3,4,1,4,3,4,3,4,1,4,3,4,3,4,1,4);

    return 0;




}