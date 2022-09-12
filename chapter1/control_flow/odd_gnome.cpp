/*
 * Kattis: Odd Gnome
 *
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int g[n+10];
        for (int i = 0; i < n; ++i)
            scanf("%d", &g[i]);
        int king = 1;
        for (int i = 1; i < n - 1; ++i) {
            if (g[i-1] + 1 != g[i] && g[i+1] - 1 != g[i])
                king = i + 1;
        }
        printf("%d\n", king);
    }
    return 0;
}
