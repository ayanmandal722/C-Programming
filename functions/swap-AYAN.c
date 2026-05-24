#include<stdio.h>
void swap(int* a , int* b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a;
    int b;
    printf("enter the value of a:");
    scanf("%d",&a);
    printf("enter the value of b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("%d%d",a,b);
    return 0;
}