/*
 * Kattis: One Chicken per Person
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int x = abs(n - m);
    if (n < m && x > 1)
        printf("Dr. Chaz will have %d pieces of chicken left over!\n", x);
    else if (n < m)
        printf("Dr. Chaz will have %d piece of chicken left over!\n", x);
    else if (x > 1)
        printf("Dr. Chaz needs %d more pieces of chicken!\n", x);
    else
        printf("Dr. Chaz needs %d more piece of chicken!\n", x);
        
    return 0;
}
