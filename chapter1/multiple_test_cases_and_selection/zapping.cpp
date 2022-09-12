/*
 * UVa 12468 - Zapping 
 * author: uncoded
 */

#include <cstdio>

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b), (a != -1 && b != -1)) {
        int nb_moves = abs(a - b);
        if (nb_moves > 50) nb_moves = 100 - nb_moves;
        printf("%d\n", nb_moves);
    }
    return 0;
}
