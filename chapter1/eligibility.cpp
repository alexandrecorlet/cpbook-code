/*
 * Kattis: Eligibility
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t;
    scanf("%d\n", &t);
    while (t--) {
        char name[35];
        int st_year, dob_year, courses;
        scanf("%s %d/%*d/%*d %d/%*d/%*d %d\n", name, &st_year, &dob_year, &courses);
        if (st_year >= 2010 || dob_year >= 1991)
            printf("%s eligible\n", name);
        else if (courses > 40)
            printf("%s ineligible\n", name);
        else
            printf("%s coach petitions\n", name);
    }
    return 0;
}
