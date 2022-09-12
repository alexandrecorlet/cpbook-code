/*
 * UVa 12917 - Prop hunt!
 * author: uncoded
 */

#include <cstdio>
#include <cmath>

int main() {
    int P, H, O;
    while (scanf("%d %d %d", &P, &H, &O) != EOF) 
        printf("%s win!\n", (abs(P - O) < H) ? "Hunters" : "Props");
    return 0;
}
