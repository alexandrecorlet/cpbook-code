/*
 * Kattis: Yin and Yang Stones
 * author: uncoded
 */

#include <cstdio>

int main() {
    char s[112345];
    scanf("%s", s);
    int w = 0, b = 0;
    for (int i = 0; s[i]; ++i) {
        if (s[i] == 'W')
            ++w;
        else
            ++b;
    }
    printf("%d\n", w == b ? 1 : 0);
    return 0;
}
