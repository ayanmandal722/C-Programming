
#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER OF LINES : ");
    scanf("%d",&n);

    for(int i = 1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j =1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



// we can use nst value that indicates no of stars
//     *
//    ***
//   *****
//  *******