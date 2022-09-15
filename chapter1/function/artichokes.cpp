/*
 * Kattis: Amalgamated Artichokes
 * author: uncoded
 */

#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

double price(int p, int a, int b, int c, int d, int k) {
    return p * (sin(a * k + b) + cos(c * k + d) + 2.0); 
}

int main() {
    int p, a, b, c, d, n;
    scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n);
    double maxi = -1.0, best = 0;
    for (int i = 1; i <= n; ++i) {
        double x = price(p, a, b, c, d, i);
        best = max(best, maxi - x);
        if (maxi < x) maxi = x; 
    }
    printf("%.6lf\n", best);
    return 0; 
}
