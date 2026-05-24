//WAP TO DETERMINE IF THE NUMBER IS COMPOSITE OR PRIME


#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE OF n :");
    scanf("%d",&n);
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            printf("the number is composite");
            break;
        }
            else{
                printf("the number is prime");
            }
            break;
    }
    return 0;
}

