/*
 * UVa 13034 - Solve Everything :-)
 * author: uncoded
 */

#include <cstdio>

int main() {
    int s, caseNo = 0;
    scanf("%d", &s);
    while (s--) {
        bool ok = true;
        for (int i = 0; i < 13; ++i) {
            int p;
            scanf("%d", &p);
            if (!p) ok = false;
        }
        printf("Set #%d: %s\n", ++caseNo, (ok) ? "Yes" : "No");
    }
    return 0;
}
