/*
 * UVa 12015 - Google is Feeling Lucky
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;
const int MAXM = 130;

int main() {
    int tc, caseNo = 0;
    scanf("%d", &tc);
    while (tc--) {

        char url[MAXN][MAXM];      
        int relevance[MAXN];         // store the relevance of the i-th url

        int most_relevant = 0;
        for (int i = 0; i < 10; ++i) {
            scanf("%s %d", url[i], &relevance[i]);
            most_relevant = max(most_relevant, relevance[i]);
        }

        printf("Case #%d:\n", ++caseNo);
        for (int i = 0; i < 10; ++i)
            if (relevance[i] == most_relevant)
                printf("%s\n", url[i]);
    }
    return 0;    
}
