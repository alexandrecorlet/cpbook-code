/*
 * UVa 11559 - Event Planning
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>

const int INF = 1e9;

int main() {
    int n, b, h, w;

    while (scanf("%d %d %d %d", &n, &b, &h, &w) != EOF) {
        int most_affordable = INF;
        while (h--) {
            int price;
            scanf("%d", &price);
            for (int i = 0; i < w; ++i) {
                int cap;
                scanf("%d", &cap);
                if (n <= cap && b >= price * n)
                    most_affordable = std::min(most_affordable, price * n);
            }
        }
        if (most_affordable != INF)
            printf("%d\n", most_affordable);
        else
            printf("stay home\n");
    }
    
    return 0;
}
