/*
 * Kattis: Moscow Dream
 * author: uncoded
 */

#include <cstdio>

int main() {
    int a, b, c, n;
    scanf("%d %d %d %d", &a, &b, &c, &n);
    printf("%s\n", ((a > 0 && b > 0 && c > 0) && (a + b + c >= n) && (n > 2)) ? "YES" : "NO");
    return 0;
}
