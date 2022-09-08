/*
 * Kattis: Is it Halloween?
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << ((s == "DEC 25" || s == "OCT 31") ? "yup" : "nope") << endl;
    return 0;
}
