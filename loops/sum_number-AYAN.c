#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    int sum = 0;
    int lastDegit = 0;
    while(n!=0){
    lastDegit=n%10;
    sum=sum+lastDegit;
    n=n/10;
    }
    printf("Sum of degits are : %d",sum);
    return 0;
}