/*
 * UVa 11547 - Automatic Answer
 * author: uncoded
 */

#include <cstdio>
#include <cmath>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int x = abs((63*n + 7492) * 5 - 498);
        printf("%d\n", x / 10 % 10);
    }
    return 0;
}
