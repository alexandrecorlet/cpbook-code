/*
 * Kattis: Job Expenses
 * author: uncoded
 */

#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    int total = 0;
    while (n--) {
        int k;
        scanf("%d", &k);
        if (k < 0) total += abs(k);
    }
    printf("%d\n", total);
    return 0;
}
