/*
 * Kattis: Ptice
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int getCorrectAnswers(char s[], int n, char guess[], int m) {
    int j = 0, correct = 0;
    for (int i = 0; s[i]; ++i) {
        if (s[i] == guess[j]) 
            ++correct; 
        j = (1 + j) % m;
    }
    return correct;
}

int main() {
    int n;
    char s[110];
    scanf("%d %s", &n, s);
    char adrian[] = "ABC", bruno[] = "BABC", goran[] = "CCAABB"; 
    int a[] = {
        getCorrectAnswers(s, n, adrian, 3), 
        getCorrectAnswers(s, n, bruno, 4), 
        getCorrectAnswers(s, n, goran, 6)
    };
    int* maxi = max_element(a, a+3); 
    printf("%d\n", *maxi);
    for (int i = 0; i < 3; ++i)
        if (a[i] == *maxi)
            printf("%s\n", i == 0 ? "Adrian" : (i == 1) ? "Bruno" : "Goran");
    return 0;
}
