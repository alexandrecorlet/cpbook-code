/*
 * UVa 12798 - Handball
 *
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n, m;
    while (scanf("%d %d", &n, &m) != EOF) {
        int pro_players = 0;
        while (n--) {
            int pro_player = 1;
            for (int i = 0; i < m; ++i) {
                int scored;
                scanf("%d", &scored);
                if (!scored) 
                    pro_player = 0;
            }
            if (pro_player) 
                ++pro_players;
        }
        printf("%d\n", pro_players);
    }
    return 0;
}
