#include<stdio.h>
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int sum=0;
    int lastDegit;
    while (n!=0){
        lastDegit=n%10;
        if (lastDegit%2==0){
        sum=sum + lastDegit;
        }
        n=n/10;
        }
    printf("sum is %d",sum);
    return 0;
}
