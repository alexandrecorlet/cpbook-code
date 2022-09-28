/*
 * Kattis: Pea Soup and Pancakes
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

const int MAX_POS = 120;

int n, k;
char s[MAX_POS], r[MAX_POS];

int main() {
    scanf("%d\n", &n);
    int ok = 0;
    while (n-- && !ok) {
        scanf("%d\n", &k);
        scanf("%[a-z ]\n", s);
        int peasoup = 0, pancakes = 0;
        for (int i = 0; i < k; ++i) {
            scanf("%[a-z ]\n", r);
            if (!strcmp(r, "pea soup"))
                peasoup = 1;
            if (!strcmp(r, "pancakes"))
                pancakes = 1;
        }
        if ((!ok) && (peasoup && pancakes)) {
            printf("%s\n", s); 
            ok = 1;
        }
    }
    if (!ok)
        printf("Anywhere is fine I guess\n");
    return 0;
}
