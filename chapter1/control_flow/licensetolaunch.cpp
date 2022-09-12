/*
 * Kattis: License to Launch
 *
 * author: uncoded
 */

#include <cstdio>

const int INF = 1e9 + 1;

int main() {
    int n;
    scanf("%d", &n);
    int ans = 0, min_junk = INF;
    for (int i = 0; i < n; ++i) {
        int x;
        scanf("%d", &x);
        if (min_junk > x) {
            min_junk = x;
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
