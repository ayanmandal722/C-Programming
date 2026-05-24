#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER OF LINES : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// ******* (line 1) no of stars in line + no of the row = n+1
// ******  (line 2)  so i+j=n+1
// *****   (line 3)  =>j=n+1-i
// ****    (line 4)
// ***     (line 5)
// **      (line 6)  
// *       (line 7)