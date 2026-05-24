#include<stdio.h>
int main(){
    for(int i =65;i<=90;i++){
        char ch=(char)i;//to print the charecter of the ascii value we can type this.this is calledtypecasting
        printf("%c -> ",ch);
        printf("%d\n",i);
    }   
    return 0;
}
