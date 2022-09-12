/*
 * Kattis: Nasty Hacks
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int r, e, c;
        scanf("%d %d %d", &r, &e, &c);
        int profit =  e - c;
        printf("%s\n", (r < profit) ? "advertise" : (r == profit) ? "does not matter" : "do not advertise");
    }
    return 0;
}
