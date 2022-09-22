/*
 * UVa 10963 - The Swallowing Ground
 * author: uncoded
 */

#include <cstdio>

const int INF = 1e9;

int main() {
    int t, caseNo = 0;
    scanf("%d", &t);
    while (t--) {
        if (caseNo > 0) 
            printf("\n");
        int w;
        scanf("%d", &w);
        int x, y, last_gap = INF, closeable = 1;
        while (w--) {
            scanf("%d %d", &x, &y);
            if (last_gap != INF && last_gap != x - y) 
                closeable = 0;
            last_gap = x - y;
        }
        printf("%s\n", closeable ? "yes" : "no");
        ++caseNo;
    }
    return 0;
}
