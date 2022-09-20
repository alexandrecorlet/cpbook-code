/*
 * Kattis: Hissing Microphone
 * author: uncoded
 */

#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char s[60];
    scanf("%s", s);
    int len = strlen(s), hiss = 0;
    if ( adjacent_find(s, s+len, [](char ch1, char ch2){return ch1 == 's' && 's' == ch2;}) != s+len )
        hiss = 1;
    printf("%shiss\n", hiss ? "" : "no ");
    return 0;
}

