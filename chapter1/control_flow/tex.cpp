/*
 * UVa 272 - TEX Quotes
 * author: uncoded
 */

#include <cstdio>

int main() {
    char c;
    bool op = false;
    while (scanf("%c", &c) != EOF) {
        if (c == '"') {
            printf("%s", (op) ? "''" : "``");
            op = !op;
        } else {
            printf("%c", c);
        }
    }
    return 0;
}
