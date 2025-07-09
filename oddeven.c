
#include<stdio.h>
int main()
{
    int n,odd=0,even=0;
    int count = 0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            even=even+i;
         

        }
        else
        {
            odd=odd+i;
            

        }
    }
    printf("Sum of even numbers is %d\n",even);
    printf("Sum of odd numbers is %d\n",odd);
    
    
    return 0;
}