/*
 * Kattis: Poker Hand
 * author: uncoded
 */

#include <cstdio>
#include <unordered_map>
#include <algorithm>

int main() {
    std::unordered_map<char, int> hist;
    for (int i = 0; i < 5; ++i) {
        char r;
        scanf("%c%*c\n", &r);
        ++hist[r];
    }
    int best = 0;
    for (auto &[r, f] : hist)
        best = std::max(best, f);
    printf("%d\n", best);
    return 0;
}
