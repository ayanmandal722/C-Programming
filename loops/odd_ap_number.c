//DISPLAY THIS AP ----- 1,3,5,7,9,11......UPTO n TIMES
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF n :");
    scanf("%d",&n);          //last n term will be a+(n-1)d
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d\n",i);
    }
    return 0;
}