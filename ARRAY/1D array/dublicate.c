//code to find out the dublicated elements in an array

#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,7,5,6,7};
    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]) {
                printf("%d is dublicated in the array",arr[i]);
                break;
            }
        }
    }
    return 0;
}