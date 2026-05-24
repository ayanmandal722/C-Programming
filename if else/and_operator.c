//to find a value which will satisfy in a range we use and function as &&
//like to determine a number wheather it is three digit number or not ,the number will have to be (>99) and (<1000)
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    if (n>99 && n<1000){
        printf("IT IS A THREE DIGIT NUMBER");
    }
    else{
        printf("IT IS NOT A THREE DIGIT NUMBER");
    }
    return 0;
}