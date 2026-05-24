#include <stdio.h>
int main()
{
    int i, j;
    int lines;

    printf("Enter The Number Of Lines For Printing Odd Number Triangle: ");
    scanf("%d", &lines);

    for (i = 1; i <= lines; i++)
    {
        for (j = 1; j <= 2*i-1; j=j+2)
        {
            printf("%d ",j);
        }

        printf("\n");
    }

    return 0;
}