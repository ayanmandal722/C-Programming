#include<stdio.h>
int main(){
    int a[3][2] = {{2,3},{3,4},{4,5}};
    int b[2][4] = {{1,2,3,4},{2,3,4,5}};
    int res[3][4];
    int common = 2;
    //columb of a = row of b = 2

    //multiplying
    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            //row of a[][] =columb of b[][]
            //(a[i][0],a[i][1],a[i][2].......) * (b[0][j],b[1][j],b[2][j]........)
            res[i][j] = 0;
            for(int k = 0;k<common;k++){
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }


    //printing the value
    for(int i = 0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    return 0;
}