/*
 * UVa 12289 - One-Two-Three
 * author: uncoded
 */

#include <cstdio>
#include <cstring>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[8];
        scanf("%s", s);
        int ans = 1;
        if (strlen(s) == 5)
            ans = 3;
        else if ((s[0] == 't' && s[1] == 'w') || (s[0] == 't' && s[2] == 'o') || (s[1] == 'w' && s[2] == 'o'))
            ans = 2;
        printf("%d\n", ans);
    }
    return 0;
}
