/*
 * UVa 11364 - Parking
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int mini = 99, maxi = 0;
        while (n--) {
            int x;
            scanf("%d", &x);
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        printf("%d\n", (maxi - mini) * 2);
    }
    return 0;
}
