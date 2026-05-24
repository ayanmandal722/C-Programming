#include<stdio.h>
int main(){
    int n,m;
    printf("ENTER THE NUMBER OF LINES : ");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF STARS IN EACH LINE : ");
    scanf("%d",&m);
    for(int i = 1;i<=n;i++){        //to run the total number of lines
        for(int i =1;i<=m;i++){     //to print charecter in each line
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
