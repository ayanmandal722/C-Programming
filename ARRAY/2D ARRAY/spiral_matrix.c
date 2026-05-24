#include<stdio.h>
int main(){
    int m,n;
    printf("ENTER THE NO OF ROWS : ");
    scanf("%d",&m);
    printf("ENTER THE NUMBER OF COLUMNS : ");
    scanf("%d",&n);
    int a[m][n];
    printf("ENTER ELEMENTS OF MATRIX : \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    int minr = 0; //minimum row
    int minc =0; //minimum columb
    
    }
    return 0;
}