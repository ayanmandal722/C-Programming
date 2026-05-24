// input percentage of a student and print grade
// to valid a number between in range we can use [else if] function
#include <stdio.h>
int main()
{
    int percentage;
    printf("ENTER THE PERCENTAGE : ");
    scanf("%d", &percentage);
    if (percentage > 90)
    {
        printf("excellent");
    }
    else if (percentage > 70)
    {
        printf("moderate");
    }
    else if (percentage > 50)
    {
        printf("average");
    }
    else if (percentage <= 50)
    {
        printf("fail");
    }
    return 0;
}