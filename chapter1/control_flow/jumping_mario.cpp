/*
 * UVa 11764 - Jumping Mario
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t, caseNo = 0;
    scanf("%d", &t);
    while (t--) {
        int n, curr_height;
        scanf("%d %d", &n, &curr_height);
        int high_jumps = 0, low_jumps = 0;
        while (--n) {
            int h;
            scanf("%d", &h);
            if (curr_height < h)
                ++high_jumps;
            else if (curr_height > h)
                ++low_jumps;
            curr_height = h;
        }
        printf("Case %d: %d %d\n", ++caseNo, high_jumps, low_jumps);
    }
    return 0;
}
