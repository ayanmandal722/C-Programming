//code to find out the unique element which has no dublicated in the array

#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,1,3,4,5,3,5};
    for(int i=0;i<7;i++){
        bool flag =false;
        for(int j=i+1;j<7;j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(flag==false){
            printf("this is %d",arr[i]);
            break;
    }  
}
return 0;
}