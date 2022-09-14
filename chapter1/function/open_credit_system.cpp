/*
 * UVa 11078 - Open Credit System
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int maxi = -INF, best = -INF;
        while (n--) {
            int x;
            scanf("%d", &x);
            best = max(best, maxi - x);
            if (x > maxi) {
                maxi = x;
            }
        }
        printf("%d\n", best);
    }
    return 0;    
}
