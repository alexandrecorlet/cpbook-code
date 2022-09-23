/*
 * Kattis: Drinking Song
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

char* f(int n) {
    char* str = (char*) malloc(16);
    strcpy(str, n > 1 ? "bottles" : "bottle");
    return str;
}

char* g(int n, char s[]) {
    char* str = (char*) malloc(50);
    char* temp = (char*) malloc(50);
    if (n)
        sprintf(temp, "%d %s of %s on the wall", n, f(n), s);
    else
        sprintf(temp, "no more bottles of %s", s);
    strcpy(str, temp);
    return str;
}

void printVerseOne(int n, char s[]) {
    printf("%d %s of %s on the wall, %d %s of %s.\n", n, f(n), s, n, f(n), s);
}

void printVerseTwo(int n, char s[]) {
    // 1) Take one down, pass it around, 2 bottles of milk on the wall.
    // 2) Take one down, pass it around, 1 bottle of milk on the wall.
    // 3) Take it down, pass it around, no more bottles of milk.
    printf("Take %s down, pass it around, %s.\n\n", n ? "one" : "it", g(n, s));
}

int main() {
    int n;
    scanf("%d", &n);
    char s[120];
    scanf("%s", s); 
    while (n) {
        printVerseOne(n, s);
        n--;
        printVerseTwo(n, s);
    }

    return 0;
}
