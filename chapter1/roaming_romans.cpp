/*
 * Kattis: Roaming Romans
 * author: uncoded
 */

#include <cstdio>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%d\n", (int) (0.5 + x * 1000 * 5280 / 4854));
    return 0;
}
