
#include<stdio.h>
int main()
{
    int marks[10],i;
    int *ptr;
    int dist=0,first=0,pass=0,fail=0;
    ptr=marks;
    printf("Enter the marks of 10 students\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=marks;
    for(i=0;i<10;i++)
    {
        if(*ptr>=70)
        {
            dist++;
        }
        else if(*ptr>=60 && *ptr<70)
        {
            first++;
        }
        else if(*ptr>=40 && *ptr<60)
        {
            pass++;
        }
        else if(*ptr<40)
        {
            fail++;
        }
        ptr++;
    }
    printf("DISTINCTION %d\n FIRST CLASS %d\n PASS %d\n FAIL %d\n",dist,first,pass,fail);
    return 0;
}
