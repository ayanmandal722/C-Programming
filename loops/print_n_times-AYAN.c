#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMBER : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2){
        printf("hello c\n");
        //i++ means i=i+1     ,    i<=n means how many times it will run
    }
    return 0;
}