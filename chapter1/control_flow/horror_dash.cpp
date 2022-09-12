/*
 * UVa 11799 - Horror Dash
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int t, caseNo = 0;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int s = 0; 
        while (n--) {
            int c;
            scanf("%d", &c);
            s = max(s, c);
        }
        printf("Case %d: %d\n", ++caseNo, s);
    }
    return 0;
}
