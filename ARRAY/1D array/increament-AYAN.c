//given an array integers.print the even number of integers multiply by 2 and odd number od intergers increament by 10.........

#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF THE ARRAY : ");
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        printf("\n ENTER THE VALUE OF ELEMENT %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(i%2==0){
            arr[i]=arr[i]*2;
        }
        else{
            arr[i]= arr[i]+10;
        }
    }
    for(int i = 0 ;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}