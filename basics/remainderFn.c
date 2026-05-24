#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER THE DIVIDENT : ");
    scanf("%d",&a);
    printf("ENTER THE DIVISOR : ");
    scanf("%d",&b);
    //int q = a/b;
    //int r = a - (b*q);
    // to find the remainder we can directly use %(modulo function) sign.
    int r = a%b;   //must be a>b
    printf("THE REMAINDER IS : %d",r);
    return 0;
}