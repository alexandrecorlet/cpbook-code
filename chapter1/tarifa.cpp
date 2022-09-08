/*
 * Kattis: Tarifa
 * author: uncoded
 */

#include <cstdio>

int main() {
    int x, n;
    scanf("%d %d", &x, &n);
    int total = x * (n + 1);
    while (n--) {
        int p;
        scanf("%d", &p);
        total -= p;
    }
    printf("%d\n", total);
    return 0;
}
