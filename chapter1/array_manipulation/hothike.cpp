/*
 * Kattis: Hot Hike
 * author: uncoded
 */

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

const int INF = 50;                         // 1 <= t[i] <= 40

int main() {
    int n;
    scanf("%d", &n);
    int t[70];
    for (int i = 0; i < n; ++i)
        scanf("%d", &t[i]);
    int d = 0, maxi = INF;
    for (int i = 2; i < n; ++i) {
        int curr_maxi = max(t[i], t[i-2]);
        if (curr_maxi < maxi) {
            maxi = curr_maxi;
            d = i - 2;
        }
    }
    printf("%d %d\n", d+1, maxi);
    return 0;
}
