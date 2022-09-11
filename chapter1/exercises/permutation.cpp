#include <bits/stdc++.h>

using namespace std;

int main() {
    int N = 5, p[N];
    for (int i = 0; i < N; ++i) p[i] = i;
    do {
        for (int i = 0; i < N; ++i) printf("%c ", 'A' + p[i]);
        printf("\n");
    } while (next_permutation(p, p + N));
    return 0;
}
