/*
 * UVa 11044 - Searching for Nessy
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, m;
        scanf("%d %d", &n, &m);
        printf("%d\n", (n / 3) * (m / 3));
    }
    return 0;
}
