/*
 * Kattis: Faktor
 * author: uncoded
 */

#include <cstdio>

int main() {
    int a, i;
    scanf("%d %d", &a, &i);
    printf("%d\n", a * (i - 1) + 1);
    return 0;
}
