/*
 * UVa 12372 - Packing for Holiday
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t, c = 0;
    scanf("%d", &t);
    while (t--) {
        int l, w, h;
        scanf("%d %d %d", &l, &w, &h);
        printf("Case %d: %s\n", ++c, (l < 21 && w < 21 && h < 21) ? "good" : "bad");
    }
    return 0;
}
