#include<stdio.h>
int main(){
int n;
printf("ENTER THE NO OF ROW : ");
scanf("%d",&n);
int nsp = n - 1;
for(int i=1;i<=n;i++){
    int a = -1;
    for(int j=1;j<=nsp;j++){
        printf(" ");
        nsp--;
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        int a = -1;
        for (int l=1;l<=i-1;l++){
            printf("%d",a);
            a--;
        }
        printf("\n");
    }
    
}

return 0;
}