#include <stdio.h>

int maze(int cr, int cc, int er, int ec) {
    int rightways = 0;
    int downways = 0;
    if (cr == er && cc == ec) return 1;
    if (cr == er) {          // only rightways call
        rightways += maze(cr, cc + 1, er, ec);
    } else if (cc == ec) {   // only downways calp
        downways += maze(cr + 1, cc, er, ec);
    } else if (cr < er && cc < ec) {
        rightways += maze(cr, cc + 1, er, ec);
        downways += maze(cr + 1, cc, er, ec);
    }
    int totalways = rightways + downways;
    return totalways;
}

int main() {
    int n;
    printf("ENTER THE NUMBER OF ROWS IN THE MAZE: ");
    scanf("%d", &n);
    int m;
    printf("ENTER THE NUMBER OF COLUMNS IN THE MAZE: ");
    scanf("%d", &m);
    int no_of_ways = maze(1, 1, n, m);
    printf("%d\n", no_of_ways);
    return 0;
}
