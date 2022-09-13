/*
 * UVa 12403 - Save Setu
 * author: uncoded
 */

#include <cstdio>
#include <cstring>

int main() {
    int t, total = 0;
    scanf("%d", &t);
    while (t--) {
        char operation[20];
        scanf("%s", operation);
        if (strcmp(operation, "donate") == 0) {
            int k;
            scanf("%d", &k);
            total += k;
        } else {
            printf("%d\n", total);
        }
    }
    return 0;
}
