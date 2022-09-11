/*
 * UVa 10055 - Hashmat the Brave Warrior
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y;
    while (scanf("%lld %lld", &x, &y) != EOF)
        printf("%lld\n", max(x, y) - min(x, y));
    return 0;
}
