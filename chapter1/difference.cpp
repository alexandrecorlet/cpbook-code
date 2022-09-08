/*
 * Kattis: Difference
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
    long long x, y;
    while (scanf("%lld %lld", &x, &y) != EOF)
        printf("%lld\n", max(x, y) - min(x, y));
    return 0;
}
