#include<stdio.h>

int square(int num){
    return num*num;
}

int sumofsquares(int a, int b){ 
    return square(a)+square(b);
}

    int main() {
        int n1,n2;
        
        printf("Enter value of 2 nums:");
        scanf("%d %d", &n1,&n2);

        int res = sumofsquares(n1,n2);

        printf("Sum of squares is %d & %d is %d\n", n1 , n2 , res);

        return 0;

    }