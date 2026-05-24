#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF n :");
    scanf("%d",&n);  
    int a = 100;
    for(int i=1;i<=n;i=i+1){
        a=a-3;
        printf("%d\n",a);
    }
    return 0;
}