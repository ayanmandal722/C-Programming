#include<stdio.h>
int power(int n, int m){
    if(m==0) return 1;
    if(m==1) return n;
    int x = power(n,m/2);
    if(m%2==0) return x*x;
    else return x*x*n;
}
int main(){
    int n;
    printf("enter the base : ");
    scanf("%d",&n);
    int m;
    printf("enter the power : ");
    scanf("%d",&m);
    int p = power(n,m);
    printf("%d raised to the power %d is %d",n,m,p);
    return 0;
}