/*
 * UVa 13130 - Cacho
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a;
        scanf("%d", &a);
        bool ok = true;
        for (int i = 0; i < 4; ++i) {
            int x;
            scanf("%d", &x);
            if (a + 1 != x) ok = false; 
            a = x;
        }
        printf("%s\n", ok ? "Y" : "N");
    }
    return 0;
}
