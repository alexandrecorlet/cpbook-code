/*
 * UVa 12696 - Cabin Baggage
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t;
    scanf("%d", &t);
    int count = 0;
    while (t--) {
        double length, width, depth, weight;
        scanf("%lf %lf %lf %lf", &length, &width, &depth, &weight);
        int ok = 0;
        if ( ((length <= 56 && width <= 45 && depth <= 25) || length + width + depth <= 125) && weight <= 7 )
            ok = 1;
        printf("%d\n", ok);
        if (ok) ++count;
    }
    printf("%d\n", count);
    return 0;
}
