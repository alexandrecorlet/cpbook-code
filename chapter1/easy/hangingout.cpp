/*
 * Kattis: Hanging Out on the Terrace
 * author: uncoded
 */

#include <cstdio>
#include <cstring>

int main() {
    int L, x;
    scanf("%d %d", &L, &x);
    int currently_in = 0, not_allowed = 0;
    while (x--) {
        char s[10];
        int p;
        scanf("%s %d", s, &p);
        if (!strcmp(s, "enter")) {
            if (currently_in + p <= L) currently_in += p;
            else ++not_allowed;
        } else {
            currently_in -= p;
        }
    }
    printf("%d\n", not_allowed);
    return 0; 
}
