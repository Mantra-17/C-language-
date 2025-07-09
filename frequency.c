#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    printf("enter the number : \n");
    scanf("%s", str);
    int arr[10]={0};
    for(int i=0;i<strlen(str);i++){
    if(str[i]=='0'){
        arr[0]++;
    }else if(str[i]=='1'){
        arr[1]++;
    }else if(str[i]=='2'){
        arr[2]++;
    }
    else if(str[i]=='3'){
        arr[3]++;
    }
    else if(str[i]=='4'){
        arr[4]++;
    }
    else if(str[i]=='5'){
        arr[5]++;
    }
    else if(str[i]=='6'){
        arr[6]++;
    }
    else if(str[i]=='7'){
        arr[8]++;
    }
    else if(str[i]=='8'){
        arr[8]++;
    }
    else if(str[i]=='9'){
        arr[9]++;
    }
    else {
        printf("Invalid number !!\n");
        return 0;
    }
    }
    printf("Digit frequencies:\n");
    printf("Digit 0 : %d\n", arr[0]);
    printf("Digit 1 : %d\n", arr[1]);
    printf("Digit 2 : %d\n", arr[2]);
    printf("Digit 3 : %d\n", arr[3]);
    printf("Digit 4 : %d\n", arr[4]);
    printf("Digit 5 : %d\n", arr[5]);
    printf("Digit 6 : %d\n", arr[6]);
    printf("Digit 7 : %d\n", arr[7]);
    printf("Digit 8 : %d\n", arr[8]);
    printf("Digit 9 : %d\n", arr[9]);
    
    return 0;
    
}
