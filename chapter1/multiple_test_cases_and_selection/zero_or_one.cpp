/*
 * UVa 12646 - Zero or One
 * author: uncoded
 */

#include <cstdio>

int main() {
    int A, B, C;
    while (scanf("%d %d %d", &A, &B, &C) != EOF) {
        if (A == B && B == C)
            printf("*\n");
        else if (A != B && B == C)
            printf("A\n");
        else if (A == B && B != C)
            printf("C\n");
        else
            printf("B\n");
    }
    return 0;
}
