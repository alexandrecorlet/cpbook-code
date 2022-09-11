/*
 * UVa 11614 - Etruscan Warriors Never Play Chess 
 * author: uncoded
 */

#include <cstdio>
#include <cmath>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        printf("%lld\n", (long long) ((sqrt(n * 8 + 1) - 1) / 2)); 
    }
    return 0;
}
