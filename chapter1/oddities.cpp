/*
 * Kattis: Oddities
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d", &x);
        printf("%d is %s\n", x, (x & 1) ? "odd" : "even");
    }
    return 0;
}
