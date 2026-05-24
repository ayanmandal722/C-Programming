#include<stdio.h>
int main(){
    float a;
    printf("ENTER THE VALUE OF a : ");
    scanf("%f",&a);
    int b = a;
    float c = a - b;
    printf("%f",c);
    return 0;
}