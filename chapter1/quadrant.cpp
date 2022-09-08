/*
 * Kattis: Quadrant
 * author: uncoded
 */

#include <cstdio>

/* Given the coordinates of a point P, determine the quadrant of the point P. */
int get_quadrant(int x, int y) {
    int quadrant = 1;                   // assume (x, y) is in the 1st quadrant
    if (x < 0 && y > 0)
        quadrant = 2;
    if (x < 0 && y < 0)
        quadrant = 3;
    if (x > 0 && y < 0)
        quadrant = 4;
    return quadrant;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", get_quadrant(x, y));
    return 0;
}
