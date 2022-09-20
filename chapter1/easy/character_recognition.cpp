/*
 * UVa 12658 - Character Recognition?
 * author: uncoded
 */

#include <cstdio>
#include <cstring>

int main() {
    int n;
    scanf("%d", &n);

    char s[10][4*n+20], row[4*n+20];
    for (int i = 1; i <= 5; ++i)
        scanf("%s", s[i]);

    memcpy(row, s[4], sizeof s[4]);

    int i = 3;
    while (row[i]) {
        int d = 2;
        if (row[i-2] == '*')
            d = 1;
        if (row[i-1] == '*')
            d = 3;
        printf("%d", d);
        i += 4;
    }

    printf("\n");

    return 0;
}
