#include<stdio.h>
int main(){
    float principal,rate,time,si;
    printf("ENTER THE principal :");
    scanf("%f",&principal);
    printf("ENTER THE rate : ");
    scanf("%f",&rate);
    printf("ENTER THE time : ");
    scanf("%f",&time);
    si = (principal * rate * time) / 100;
    printf("SIMPLE INTEREST IS : %f",si);
    return 0;
}