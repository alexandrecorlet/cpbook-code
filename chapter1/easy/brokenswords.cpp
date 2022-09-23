/*
 * Kattis: Broken Swords
 *
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>

int main() {
    int n;
    scanf("%d", &n);

    int a[] = {0, 0, 0, 0};
    while (n--) {
        char s[8];
        scanf("%s", s);
        // Count how many types of each bamboo slat we have
        for (int i = 0; s[i]; ++i)
            if (!(s[i] - '0'))                      // s[i] - '0' => cast char to int
                ++a[i];
    }
    int sumTB = a[0] + a[1]; 
    int sumLR = a[2] + a[3];      
    int swords = std::min(sumTB / 2, sumLR / 2);
    int remTB = sumTB - swords * 2; 
    int remLR = sumLR - swords * 2;
    printf("%d %d %d\n", swords, remTB, remLR);
    return 0;
}
