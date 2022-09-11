/*
 * UVa 11723 - Numbering Roads
 *
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int R, N, c = 0;
    while (scanf("%d %d", &R, &N), (R && N)) {
        R--;
        if (R / N > 26) { 
            printf("Case %d: impossible\n", ++c);
            continue;
        }
        printf("Case %d: %d\n", ++c, R / N);
    }
    return 0;
}
