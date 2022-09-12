/*
 * UVa 12577 - Hajj-e-Akbar
 *
 * author: uncoded
 */

#include <cstdio>
#include <cstring>

int main() {
    char s[10]; 
    int c = 0;
    while (scanf("%s", s), strcmp(s, "*") != 0)
        printf("Case %d: Hajj-e-%s\n", ++c, (!strcmp(s, "Hajj")) ? "Akbar" : "Asghar");
    return 0;
}
