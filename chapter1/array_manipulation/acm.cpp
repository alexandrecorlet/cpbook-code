/*
 * Kattis: ACM Contest Scoring
 * author: uncoded
 */

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {

    int m, right[50], wrong[50];
    fill(right, right+27, 0);
    fill(wrong, wrong+27, 0);

    while (scanf("%d\n", &m), (m >= 0)) {
        char p, verdict[10];
        scanf("%c %s", &p, verdict); 
        
        int i = p - 'A';
        if (!strcmp(verdict, "right")) {
            right[i] = m;
        } else {
            ++wrong[i];
        }
            
    }

    int solved = 0, total = 0;
    for (int i = 0; i < 26; ++i) {
        if (right[i] > 0) {
            total += right[i];
            if (wrong[i] > 0) total += wrong[i] * 20;
            ++solved;
        }
    }

    printf("%d %d\n", solved, total);
    return 0;

}
