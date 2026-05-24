#include<stdio.h>
int main(){
    int arr[5] = {2,3,4,5,6};
    printf("%d\n",arr[3]);
    arr[3]=100;
    printf("%d",arr[3]);
    return 0;
}