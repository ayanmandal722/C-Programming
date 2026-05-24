#include<stdio.h>
int main(){
    int x=3;
    int y=10;
    printf("%d",x+y);
    int z = x + y;
    printf("\n%d",z);
    printf("\n%d",y-x);
    printf("\n%d",x*y);
    printf("\n%d",y/x);
    //as we are working on integer function so in devision the integer portion will only taken
    return 0;
}