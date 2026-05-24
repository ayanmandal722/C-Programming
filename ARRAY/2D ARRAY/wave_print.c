// 1 2 3           
// 4 5 6     ==>     1 2 3 6 5 4 7 8 9 12 11 10
// 7 8 9
//10 11 12


#include<stdio.h>
int main(){
    int m,n;
    printf("ENTER THE NO OF ROW : ");
    scanf("%d",&m);
    printf("ENTER THE NUMBER OF COLUMNS : ");
    scanf("%d",&n);
    int a[m][n];
    printf("ENTER ELEMENTS OF MATRIX : \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
            printf("%d",a[i][j]);
        }
        }
        else{
            for(int j = n-1;j>=0;j--){
                printf("%d",a[i][j]);
            }
        printf("\n");    
        }
        }
    return 0;
    }
    
