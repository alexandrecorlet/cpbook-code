/*
 * Kattis: Seven Wonders
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    char s[100];
    scanf("%s", s);
    int points[] = {0, 0, 0};
    for (int i = 0; s[i]; ++i) {
        if (s[i] == 'T')
            ++points[0];
        else if (s[i] == 'G')
            ++points[1];
        else
            ++points[2];
    }
    int sp = *min_element(points, points+3) * 7;
    for (int i = 0; i < 3; ++i) 
        sp += points[i] * points[i];
    printf("%d\n", sp);
    return 0;
}
