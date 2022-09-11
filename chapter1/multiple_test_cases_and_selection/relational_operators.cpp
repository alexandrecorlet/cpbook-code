/*
 * UVa 11172 - Relational Operator
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%c\n", (a < b) ? '<' : (a == b) ? '=' : '>');
    }
    return 0;
}

