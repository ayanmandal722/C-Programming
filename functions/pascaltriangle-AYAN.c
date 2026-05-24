//1                     -> 0!
//1 1                      0! 1!
//1 2 1                    0! 1! 2!
//1 3 3 1                  0! 1! 2! 3!
//1 4 6 4 1                0! 1! 2! 3! 4!
//1 5 10 10 5 1            0! 1! 2! 3! 4! 5!

#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i = 2;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("ENTER THE VALUE OF n :");
    scanf("%d",&n);
    for(int i = 0;i<=n;i++){
        for(int j = 0;j<=i;j++){
            int ans =combination(i,j);
            printf("%d ",ans);
        }
        printf("\n");
    }
    return 0;
}