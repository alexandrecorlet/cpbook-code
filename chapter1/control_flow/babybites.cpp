/*
 * Kattis: Baby Bites!
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d\n", &n);
    char s[n+10][n+10];
    for (int i = 0; i < n; ++i)
        scanf("%s", s[i]);
    bool ok = true;
    for (int i = 0; i < n; ++i) {
        if (strcmp(s[i], "mumble") == 0) continue;
        int x = stoi(s[i]);
        if (x != i + 1) ok = false;
    }
    printf("%s\n", ok ? "makes sense" : "something is fishy");
    return 0;
}
