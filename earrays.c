#include<stdio.h>
int printodd(int arr[], int n);

int main() {

    int arr[] = {1,2,3,4,5,6,7,8,3,14,0,5,8,};
printf("%d", printodd(arr,13));

return 0;

}

int printodd(int arr[], int n) {
    int count = 0;

    for(int i = 0; i<n ; i++) {
        if(arr[i] % 7 == 0) {
            count++;
        }
    }
    return count;
}