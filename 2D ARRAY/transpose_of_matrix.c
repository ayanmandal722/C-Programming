#include <stdio.h>

int main() {
    int r, c;
    printf("ENTER THE NUMBER OF ROWS: ");
    scanf("%d", &r);
    printf("ENTER THE NUMBER OF COLUMNS: ");
    scanf("%d", &c);

    int arr[r][c];
    printf("ENTER THE NUMBERS:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int arr1[c][r];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            arr1[i][j] = arr[j][i];
        }
    }

    printf("THE TRANSPOSED ARRAY IS:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", arr1[i][j]);        }
        printf("\n");
    }

    return 0;
}
