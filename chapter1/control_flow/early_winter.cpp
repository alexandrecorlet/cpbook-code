/*
 * Kattis: Early Winter
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n, dm;
    scanf("%d %d", &n, &dm);
    int k = 0;
    while (n--) {
        int di;
        scanf("%d", &di);
        if (di > dm)
            ++k;
        else
            break; 
    }
    if (n < 0)
        printf("It had never snowed this early!\n");
    else
        printf("It hadn't snowed this early in %d years!\n", k);
    return 0;
}
