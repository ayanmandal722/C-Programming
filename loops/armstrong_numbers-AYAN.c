#include <stdio.h>

int main() {
    int n, o, r, res = 0;

    printf("Armstrong numbers between 1 and 500 are: \n");

    for (n = 1; n <= 500; n++) {
        o = n;

        while (o != 0) {
            r = o % 10;
            res += r * r * r;
            o /= 10;
        }

        if (n == res) {
            printf("%d ", n);
        }

        res = 0;
    }

    return 0;
}