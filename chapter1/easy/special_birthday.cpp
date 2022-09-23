/*
 * UVa 12554 - A Special "Happy Birthday" Song!!!
 * author: uncoded
 */

#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);

    char names[n+50][150];
    for (int i = 0; i < n; ++i)
        scanf("%s", names[i]);

    char song[100][100] = {
        "Happy", "birthday", "to", "you", 
        "Happy", "birthday", "to", "you", 
        "Happy", "birthday", "to", "Rujia", 
        "Happy", "birthday", "to", "you"
    };

    int i_name = 0, i_song = 0, ok = 0;
    while (!ok || i_song != 0) {
        printf("%s: %s\n", names[i_name], song[i_song]);
        if (i_name == n - 1) ok = 1;
        i_name = (i_name + 1) % n;
        i_song = (i_song + 1) % 16;
    }

    return 0;
}
