/*#include<stdio.h>

int main() {
    int mar[3];
    float total = 0;
    char grade;
    float marks;
    int i;
    printf("enter the marks of physics, chemistry and mathematics :");
    scanf("%d %d %d", mar[0], mar[1], mar[2]);

    
    printf("You score %d\n out of 300", mar[0]
    +mar[1]+mar[2] );
    for(int i = 0; i<3;i++){
        total+=mar[i];
    }
    printf("your percentage are %f\n", (total/300)*100);
 


return 0;
}*/
#include<stdio.h>
#include<conio.h>

void main(){
int i,j;
int total;
int marks[3];
for(i=0; i<3;i++){
    printf("Enter your marks of Math, Sci, Eng ");
    scanf("%d", &marks[i]);
}
for(j=0; j<3;j++){
    printf("%d\n", marks[j]);
}
printf("%d", total);
}
