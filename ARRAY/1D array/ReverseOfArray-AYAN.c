//reversing the elements using one array........

#include<stdio.h>
void reverse(int arr []){
    int i = 0;
    int j = 4;
    while (i<j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
int main(){
    int arr[5];
    int i;
    for(i=0;i<5;i++){
        printf("\n enter element number of %d : ",i+1);
        scanf("%d",&arr[i]);}
    reverse(arr);
    for(i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
    }
