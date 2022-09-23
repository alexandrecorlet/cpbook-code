/*
 * UVa 12750 - Keep Rafa at Chelsea
 *
 * author: uncoded
 */

#include <cstdio>

int main() {
    int t, caseNo = 0;
    scanf("%d\n", &t);
    while (t--) {
        int n;
        scanf("%d\n", &n);
        int bad_streak = 0, games = 0, stay = 1;
        while (n--) {
            char c;
            scanf("%c\n", &c);

            bad_streak = (c == 'D' || c == 'L') ? 
                bad_streak + 1 : 0;
            if (stay)
                ++games;
            if (bad_streak == 3) 
                stay = 0; 
        }

        printf("Case %d: ", ++caseNo);
        if (stay)
            printf("Yay! Mighty Rafa persists!\n");
        else
            printf("%d\n", games);
    }
    return 0;
}
