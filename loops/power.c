#include<stdio.h>
int main(){
    int a,b;
    printf("ENTER BASE : ");
    scanf("%d",&a);
    printf("ENTER POWER : ");
    scanf("%d",&b);
    int power = 1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    printf("%d th power of %d is equal to %d",b,a,power);
    return 0;
}
