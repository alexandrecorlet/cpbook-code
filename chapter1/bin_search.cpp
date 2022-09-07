#include <bits/stdc++.h>
using namespace std;
int main() {
    int n = 5, L[] = {7, 3, 10, 20, 3000}, v = 7;
    sort(L, L+n);
    printf("%d\n", binary_search(L, L+n, v));           // should be index 1 
    return 0;
}
