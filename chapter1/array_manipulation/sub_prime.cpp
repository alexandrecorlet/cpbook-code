/*
 * UVa 11679 - Sub-prime
 * author: uncoded
 */

#include <cstdio>

int main() {
    int b, n;
    while (scanf("%d %d", &b, &n), (b && n)) {

        int reserves[b + 10];
        for (int i = 1; i <= b; ++i)
            scanf("%d", &reserves[i]);
    
        while (n--) {
            int debtor, creditor, value;
            scanf("%d %d %d", &debtor, &creditor, &value);
            reserves[creditor] += value;
            reserves[debtor] -= value;
        }
    
        int ok = 1;
        for (int i = 1; i <= b; ++i) 
            if (reserves[i] < 0)
                ok = 0;

        printf("%c\n", ok ? 'S' : 'N');
    }
    return 0;
}
