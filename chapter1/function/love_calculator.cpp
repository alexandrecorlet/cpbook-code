/*
 * UVa 10424 - Love Calculator
 * author: uncoded
 */

#include <cstdio>
#include <algorithm>
using namespace std;

int sum_digits(int n) {
    int sum = 0;
    while (n >= 10) {
        sum += n % 10;
        n /= 10;
    }
    sum += n;
    if (sum >= 10) sum = sum_digits(sum);
    return sum;
}

// OK
int get_total(char *s) {
    int total = 0;
    while (*s) {
        if (isalpha(*s)) 
            total = islower(*s) ? total + *s - 'a' + 1 : total + *s - 'A' + 1;
        ++s;
    }
    return total;
}

int main() {
    char nameOne[30], nameTwo[30];
    while (gets(nameOne)) {
        gets(nameTwo);
        int sum1 = sum_digits(get_total(nameOne));
        int sum2 = sum_digits(get_total(nameTwo));
        double ans = min(sum1, sum2) * 100.0 / max(sum1, sum2);
        printf("%.2lf %%\n", ans);
    }
    return 0;
}
