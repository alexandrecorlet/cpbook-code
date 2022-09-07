#include <bits/stdc++.h>                            // include all
using namespace std;

int main() {
    int n; 
    scanf("%d\n", &n);
    while (n--) {                                   // loop from n, n-1, n-2, ..., 0
        char x[110];                                // set size a bit larger
        scanf("0.%[0-9]...\n", x);                  // the '&' is optional here
        printf("the digits are 0.%s\n", x);
    }
    return 0;
}
