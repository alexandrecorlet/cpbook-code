/*
 * UVa 11332: Summing Digits
 * author: uncoded
 */

#include <cstdio>

int f(long long n) {
    int sum = 0;
    while (n >= 10) {
        sum += n % 10;
        n /= 10;
    }
    sum += n;
    return sum;
}

int g(int n) {
    int res = f(n);
    if (res >= 10) res = g(res);
    return res;
}

int main() {
    int n;
    while (scanf("%d", &n), n)
        printf("%d\n", g(n));
    return 0;
}
