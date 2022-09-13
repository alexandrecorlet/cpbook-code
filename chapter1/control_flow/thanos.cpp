/*
 * Kattis: Thanos
 * author: uncoded
 */

#include <cstdio>

typedef long long ll;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        ll P, R, F;
        scanf("%lld %lld %lld", &P, &R, &F);
        int y = 0;
        while (P <= F) {
            ++y;
            P = P * R;
        }
        printf("%d\n", y);
    }
        
    return 0;
}
