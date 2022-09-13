/*
 * Kattis: Cold-puter Science
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int ans = 0;
    while (n--) {
        int t;
        scanf("%d", &t);
        if (t < 0) ++ans;
    }
    printf("%d\n", ans);
    return 0;
}
