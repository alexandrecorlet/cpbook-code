/*
 * Kattis: Speed Limit
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    while (scanf("%d", &n), (n != -1)) {
        int total = 0, previous_t = 0;
        while (n--) {
            int s, t;
            scanf("%d %d", &s, &t);
            total += s * (t - previous_t);
            previous_t = t;
        }
        printf("%d miles\n", total);
    }
    return 0;
}
