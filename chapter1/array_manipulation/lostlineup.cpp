/*
 * Kattis: Lost Lineup
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    int lineup[n + 10];
    lineup[0] = 1;                              // place Jimmy at the beginning of the lineup
    for (int i = 1; i < n; ++i) {
        int d;
        scanf("%d", &d);
        lineup[d+1] = i+1;                      // place the i-th guy at the (d+1)-th position of the lineup
    }
    for (int i = 0; i < n; ++i)
        printf("%d ", lineup[i]);
    printf("\n");
    return 0;
}
