/*
 * UVa 11683 - Laser Sculpture
 * author: uncoded
 */

#include <cstdio>

int main() {
    int a, c;
    while (scanf("%d %d", &a, &c), a && c) {
        int prev_height;
        scanf("%d", &prev_height);
        int ans = 0, max_height = prev_height;
        for (int i = 1; i < c; ++i) {
            int current_height;
            scanf("%d", &current_height);
            if (prev_height >= current_height) {
                ans += prev_height - current_height; 
            } else if (current_height >= max_height) {
                ans += current_height - max_height; 
                max_height = current_height;
            }
            prev_height = current_height;
        }
        printf("%d\n", ans + a - max_height);
    }
    return 0;
}
