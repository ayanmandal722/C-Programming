#include <stdio.h>
int main()
{
    int a;
    printf("ENTER THE FIRST NUMBER : ");
    scanf("%d", &a);
    int b;
    printf("ENTER THE SECOND NUMBER : ");
    scanf("%d", &b);
    int c;
    printf("ENTER THE THIRD NUMBER : ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
            printf("%d is greatest", a);
        else
            printf("%d is greatest", c);
    }
    else
    {
        if (b > c)
            printf("%d is greatest", b);
        else
            printf("%d is greatest", c);
    }
    return 0;
}