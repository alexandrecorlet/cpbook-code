/*
 * UVa 11805 - Bafana Bafana
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t, caseNo = 0;
    scanf("%d", &t);
    while (t--) {
        int n, k, p;
        scanf("%d %d %d", &n, &k, &p);
        int result = (k + p) % n;
        printf("Case %d: %d\n", ++caseNo, (!result) ? n : result);
    }
    return 0;
}
