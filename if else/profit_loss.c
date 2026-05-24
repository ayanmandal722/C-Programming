#include <stdio.h>
int main()
{
    int cp;
    printf("ENTER THE VALUE OF COST PRICE : ");
    scanf("%d", &cp);
    int sp;
    printf("ENTER THE VALUE OF SELLING PRICE : ");
    scanf("%d", &sp);
    if (sp > cp)
    {
        printf("profit");
    }
    else
    {
        printf("loss");
    }
    return 0;
}