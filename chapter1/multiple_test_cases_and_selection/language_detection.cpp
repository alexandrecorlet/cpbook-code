/*
 * UVa 12250 - Language Detection
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

string detect_lang(string s) {
    // map word to its language
    map<string, string> mp;
    mp["HELLO"] = "ENGLISH";
    mp["HOLA"] = "SPANISH";
    mp["HALLO"] = "GERMAN";
    mp["BONJOUR"] = "FRENCH";
    mp["CIAO"] = "ITALIAN";
    mp["ZDRAVSTVUJTE"] = "RUSSIAN";
    return (mp.find(s) != mp.end()) ? mp[s] : "UNKNOWN";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int c = 0;
    while (1) {
        string s;
        cin >> s;
        if (s == "#") break;
        cout << "Case " << (++c) << ": " 
            << detect_lang(s) << endl;
    }
    return 0;
}
