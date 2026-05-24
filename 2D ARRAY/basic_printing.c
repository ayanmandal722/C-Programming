#include <stdio.h>

int main() {
    int r, c;
    printf("ENTER THE NUMBER OF ROWS: ");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMNS: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("ENTER THE NUMBER: ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("THE ARRAY IS:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
