/*
 * UVa 10300 - Ecological Premium
 *
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int f;
        scanf("%d", &f);
        int total = 0;
        while (f--) {
            int s, e;
            scanf("%d %*d %d", &s, &e);
            total += s * e;
        }
        printf("%d\n", total);
    }
    return 0;
}
