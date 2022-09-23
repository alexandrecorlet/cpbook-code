/*
 * Kattis: Mosquito Multiplication
 * author: uncoded
 */

#include <cstdio>

int main() {
    int m, p, l, e, r, s, n;
    while (scanf("%d %d %d %d %d %d %d", &m, &p, &l, &e, &r, &s, &n) != EOF) {
        while (n--) {
            int temp_p = p;
            int temp_l = l;
            int temp_m = m;
            p = temp_l / r;
            l = temp_m * e;
            m = temp_p / s;
        }
        printf("%d\n", m);
    }
    return 0;
}
