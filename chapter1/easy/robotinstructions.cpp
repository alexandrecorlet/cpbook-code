/*
 * UVa 12503 - Robot Instructions
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d\n", &t);

    while (t--) {
        int n;
        scanf("%d\n", &n);

        int p = 0, i = 0, xs[n+20];
        while(n--) {
            char s[20];
            scanf("%[A-Z ]\n", s);
            
            int x = 1;
            if (!strcmp(s, "SAME AS ")) {
                scanf("%d\n", &x);
                x = xs[x-1];
            } else if (!strcmp(s, "LEFT")) {
                x = -x; 
            }

            p += x;
            xs[i++] = x;
        }

        printf("%d\n", p);
    }

    return 0;
}
