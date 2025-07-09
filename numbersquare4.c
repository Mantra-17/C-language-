#include<stdio.h>

int main() 
{
    int n;
    printf("enter the number of rows :");
    scanf("%d", &n);

    for(int i=1;i<=n;i++) {
        for(int j=i;j<=n;j++){
            printf("%d", j);//here the j shows decrementation of pattern 
        }
        printf("\n");
    }
    return 0;
}
// agar aiya j ni jagya par i use krie printf ma to pattern change thai jay
/* out put will be
1111
222
33
4
like this */ //em alag alag output hoi sake 