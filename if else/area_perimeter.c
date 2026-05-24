#include<stdio.h>
int main(){
    int l;
    printf("ENTER THE LENGTH : ");
    scanf("%d",&l);
    int b;
    printf("ENTER THE BREADTH : ");
    scanf("%d",&b);
    int area;
    area = l * b;
    int perimeter;
    perimeter = 2*(l+b);
    if(area>perimeter){
        printf("area is greater than perimeter");
    }
    else{
        printf("area is not greater than perimeter");
    }
    return 0;
}