/*
 * Kattis: Mia
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

const int INF = 1e9;

int get_score(int a, int b) {
    int score, n = max(a, b) * 10 + min(a, b);
    if (n == 12 || n == 21)
        score = INF;
    else if (a == b)
        score = INF / 2 + n;
    else
        score = n;
    return score;
}

int main() {
    int a, b, c, d;
    while (scanf("%d %d %d %d", &a, &b, &c, &d), (a && b && c && d)) {
        int p1_score = get_score(a, b);
        int p2_score = get_score(c, d);
        if (p1_score == p2_score)
            printf("Tie.\n");
        else if (p1_score > p2_score)
            printf("Player 1 wins.\n");
        else
            printf("Player 2 wins.\n");
    }
    return 0;
}
