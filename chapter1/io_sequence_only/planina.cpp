/*
 * Kattis: Planina
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int x = 1 + (1 << n);
    printf("%d", x * x);
    return 0;
}
