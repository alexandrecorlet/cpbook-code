/*
 * Kattis: Judging Moose
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>


int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    int x = std::max(l, r) * 2;
    if (l == 0 && r == 0)
        printf("Not a moose\n");
    else if (l == r)
        printf("Even %d\n", x);
    else
        printf("Odd %d\n", x);
    
    return 0;
}
