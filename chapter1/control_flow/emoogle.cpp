/*
 * UVa 12279 - Emoogle Balance
 *
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n, caseNo = 0;
    while (scanf("%d", &n), (n)) {
        int given = 0, supp_to_give = 0;
        while (n--) {
            int x;
            scanf("%d", &x);
            if (!x)
                ++given;
            else
                ++supp_to_give;
        }
        printf("Case %d: %d\n", ++caseNo, supp_to_give - given);
    }
    return 0;
}
