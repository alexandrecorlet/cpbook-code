/*
 * Kattis: Batter Up
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    double total = 0, denominator = 0;
    while (n--) {
        double x;
        scanf("%lf", &x);
        if (x < 0) continue;
        total += x;
        ++denominator;
    }
    printf("%.16lf\n", total / denominator);
    return 0;
}
