/*
 * Kattis: Stand on Zanzibar
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int b, total = 0, last = 1;
        while (scanf("%d", &b), b) {
            if (b > last * 2) total += b - last * 2; 
            last = b;
        }
        printf("%d\n", total);
    }
    return 0;
}
