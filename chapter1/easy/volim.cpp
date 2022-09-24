/*
 * Kattis: Volim
 *
 * author: uncoded
 */

#include <cstdio>

int main() {
    int k, n;
    scanf("%d %d\n", &k, &n);
    int time = 210;
    while (n--) {
        int t;
        char c;
        scanf("%d %c\n", &t, &c);
        time -= t;
        if (time <= 0)
            break;
        if (c != 'T') 
            continue;
        ++k;
    }
    printf("%d\n", (k % 8 == 0) ? 8 : k % 8);
    return 0;
}
