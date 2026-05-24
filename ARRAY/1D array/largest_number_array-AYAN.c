#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={2,7,4,5,6};
    int max = arr[0];
    for(int i=0;i<5;i++){
        if(max < arr[i]) max = arr[i] ;
    }
    printf("%d",max);
    return 0;
}