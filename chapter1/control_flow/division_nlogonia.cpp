/*
 * UVa - 11498 Division of Nlogonia
 * author: uncoded
 */

#include <cstdio>

int main() {
    int k;
    while (scanf("%d", &k), (k)) {
        int n, m;
        scanf("%d %d", &n, &m);
        while (k--) {
            int x, y;
            scanf("%d %d", &x, &y);
            if (x == n || y == m)
                printf("divisa\n");
            else if (x > n && y > m)
                printf("NE\n");
            else if (x < n && y > m)
                printf("NO\n");
            else if (x < n && y < m)
                printf("SO\n");
            else
                printf("SE\n");
        }
    }
    return 0;
}
