/*
 * Kattis: Boss Battle
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n < 4 ? 1 : n - 2);
    return 0;
}
