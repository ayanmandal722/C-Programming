#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER OF LINES : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int k = 1; k<=i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            int d = j+64;
            int ch = (char)d;
            printf("%c",d);
        }
        printf("\n");
    }
    return 0;
}