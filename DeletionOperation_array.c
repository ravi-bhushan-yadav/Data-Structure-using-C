#include<stdio.h>
int main(){
    int arr[] = {1,2,3};
    int n = 3;
    int i;
    printf("The original array elements are :\n");
    for(i=0; i<n ; i++)
    printf("arr[%d] = %d \n", i, arr[i]);
    for(i = 1; i<n ; i++){
        arr[i] =  arr[i+1];
        n = n - 1;
    }
    printf("The array element after deletion : \n");
    for(i = 0; i<n ; i++)
    printf("arr[i] = %d \n",i, arr[i]);
}