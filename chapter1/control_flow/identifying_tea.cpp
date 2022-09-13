/*
 * UVa 13012 - Identifying tea
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t;
    while (scanf("%d", &t) != EOF) {
        int answers[8];
        for (int i = 0; i < 5; ++i)
            scanf("%d", &answers[i]);
        int ans = 0;
        for (int i = 0; i < 5; ++i)
            if (answers[i] == t) ++ans;
        printf("%d\n", ans);
    }
    return 0;
}
