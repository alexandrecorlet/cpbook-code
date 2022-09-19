/*
 * Kattis: Basketball One-on-One
 * author: uncoded
 */

#include <cstdio>
#include <cstring>

int main() {
    char record[220];
    scanf("%s", record);

    int alice = 0, barbara = 0;
    for (int i = 1; i < strlen(record); i += 2) {
        char player = record[i-1];
        int score = record[i] - '0';
        if (player == 'A')
            alice += score;
        else
            barbara += score;
    }
    
    printf("%c\n", alice > barbara ? 'A' : 'B');

    return 0;
}
