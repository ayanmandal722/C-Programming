#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF n :");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        a=a*2;
        printf("%d\n",a);
    }
    return 0;
}