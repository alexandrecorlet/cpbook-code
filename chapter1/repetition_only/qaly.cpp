/*
 * Kattis: Quality-Adjusted Life Year
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    double total_qaly = 0;
    for (int i = 0; i < n; ++i) {
        double q, y;
        scanf("%lf %lf", &q, &y);
        total_qaly += q * y;
    }
    printf("%.3lf\n", total_qaly);
    return 0;
}
