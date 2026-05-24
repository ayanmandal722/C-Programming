#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;
    for(int i = 0;i<n ; i++){
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("THE SUM OF THE ELEMENTS IN THE ARRAY IS : %d",sum);
    return 0;
}