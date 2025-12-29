#include<stdio.h>
int main(){
    int arr[] = {1,3,4,5,6};
    int n = 5;
    int item = 10, k = 3;
    int i = 0, j = n;
    printf("The original array elements are :\n");
    for(i = 0; i<n ; i++){
        printf("arr[%d] = %d \n",i, arr[i]);
    }
}