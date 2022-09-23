/*
 * Kattis: Army Strength (Easy/Hard)
 * author(s): uncoded && israel
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        printf("\n");
        int ng, nm;
        scanf("%d %d", &ng, &nm);
        int max_god = 0, max_mechagod = 0;
        while (ng--) {
            int s;
            scanf("%d", &s);
            max_god = max(max_god, s);
        }
        while (nm--) {
            int s;
            scanf("%d", &s);
            max_mechagod = max(max_mechagod, s);
        }
        printf("%s\n", (max_god >= max_mechagod) ? "Godzilla" : "MechaGodzilla");
    }
    return 0;
}
