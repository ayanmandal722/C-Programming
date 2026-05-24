#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    if(n<0){
        n = n * (-1);}
        printf("THE ABSOLUTE VALUE IS : %d",n);
    return 0;
}