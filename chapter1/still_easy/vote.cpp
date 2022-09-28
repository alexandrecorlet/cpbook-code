/*
 * Kattis: Popular Votes
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int t, n;

int main() {
    scanf("%d", &t); 
    while (t--) {
        scanf("%d", &n);
        int winner = 0, max_votes = 0, total = 0;
        for (int i = 1; i <= n; ++i) {
            int votes;
            scanf("%d", &votes);
            if (votes >= max_votes) {
                winner = (votes == max_votes) ? 0 : i;
                max_votes = votes;
            } 
            total += votes;
        }
        if (!winner)
            printf("no winner\n");
        else
            printf("%s winner %d\n", (max_votes*2 > total) ? "majority" : "minority", winner);
    }
    return 0;
}
