/*
 * UVa 11942 - Lumberjack Sequencing
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    printf("Lumberjacks:\n");
    while (n--) {
        int arr[20], cpy[20];
        for (int i = 0; i < 10; ++i)
            scanf("%d", &arr[i]);

        memcpy(cpy, arr, sizeof arr);
        sort(cpy, cpy+10); 
        
        bool ordered = false;
        if (equal(cpy, cpy+10, arr)) {
            ordered = true;
            printf("Ordered\n");
        }

        sort(cpy, cpy+10, greater<int>());
        if (!ordered && equal(cpy, cpy+10, arr)) {
            ordered = true;
            printf("Ordered\n");
        }

        if (!ordered)
            printf("Unordered\n");
    }

    return 0;
}
