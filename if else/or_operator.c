// to vind the value in condion of either ,or we use or operator as ||
// like to print intiger value and find it is devided by 5 or 3 -
#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE OF n : ");
    scanf("%d", &n);
    if (n % 3 == 0 || n % 5 == 0)
    {
        printf("THE VALUE IS DEVISIBLE");
    }
    else
    {
        printf("THE VALUE IS NOT DEVISIBLE");
    }
    return 0;
}
