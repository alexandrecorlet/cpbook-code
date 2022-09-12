/*
 * Kattis: Number Fun
 *
 * author: uncoded
 */

#include <cstdio>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b == c || a * b == c || abs(a - b) == c)
            printf("Possible\n");
        else if (a * c == b || b * c == a)
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}
