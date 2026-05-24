//code to find out an element is either present inside an array or not

#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]= {21,44,65,86,34,76,86};
    int x = 86;
    int index = 0;
    bool flag = false;
    for(int i =0;i<7;i++){
        if(arr[i]==x){
            flag = true;
            index = i;
            break;
        }
    }
    if(flag==false) printf("%d is not present in the array.",x);
    else printf("%d is present in the array and it's position is %d.",x,index);
    return 0;
}