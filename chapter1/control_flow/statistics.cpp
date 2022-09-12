/*
 * Kattis: Statistics
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int main() {
    int n, caseNo = 0;
    while (scanf("%d\n", &n) != EOF) {
        int mini = INF, maxi = -INF; 
        while (n--) {
            int x;
            scanf("%d", &x);
            mini = min(mini, x);
            maxi = max(maxi, x);
        }
        printf("Case %d: %d %d %d\n", ++caseNo, mini, maxi, maxi - mini);
    }
    return 0;
}
