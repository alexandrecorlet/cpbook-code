/*
 * Kattis: Star Arrangements
 * author: uncoded
 */

#include <cstdio>

int main() {
    int s;
    scanf("%d", &s);
    printf("%d:\n", s);
    for (int fr = 2; fr <= s / 2 + 1; ++fr) {
        int rem = s % (2 * fr - 1);
        if (rem == 0 || rem - fr == 0)
            printf("%d,%d\n", fr, fr-1);
        if (s % fr == 0)
            printf("%d,%d\n", fr, fr);
    }
    return 0;
}
