/*
 * Kattis: Bubble Tea
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>

const int MAXN = 1100;
const int INF = 1e9;

int main() {
    int n, teas[MAXN];
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &teas[i]);
    int m, toppings[MAXN];
    scanf("%d", &m);
    for (int i = 1; i <= m; ++i)
        scanf("%d", &toppings[i]);
    int most_affordable = INF;
    for (int i = 1; i <= n; ++i) {
        int k;
        scanf("%d", &k);
        while (k--) {
            int j;
            scanf("%d", &j);
            most_affordable = std::min(most_affordable, teas[i] + toppings[j]);
        }
    }
    int x;
    scanf("%d", &x);
    printf("%d\n",(most_affordable > x) ? 0 : (x / most_affordable - 1));
    return 0;
}
