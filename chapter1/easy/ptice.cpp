/*
 * Kattis: Ptice
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int n;
    char s[110];
    scanf("%d %s", &n, s);
    char adrian[] = "ABC", bruno[] = "BABC", goran[] = "CCAABB"; 
    int correct[] = {0, 0, 0};
    for (int i = 0; s[i]; ++i) {
        if (adrian[i%3] == s[i])
            ++correct[0];
        if (bruno[i%4] == s[i])
            ++correct[1];
        if (goran[i%6] == s[i])
            ++correct[2];
    }
    int* maxi = max_element(correct, correct+3);
    printf("%d\n", *maxi);
    for (int i = 0; i < 3; ++i)
        if (correct[i] == *maxi)
            printf("%s\n", i == 0 ? "Adrian" : (i == 1) ? "Bruno" : "Goran");
    return 0;
}
