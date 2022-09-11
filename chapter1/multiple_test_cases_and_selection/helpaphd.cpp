/*
 * Kattis: Help a PhD candidate out!
 *
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while (n--) {
        string expr;
        cin >> expr;

        size_t i = expr.find('+');
        if (i == string::npos) {
            cout << "skipped" << endl;
            continue;
        }

        int a = stoi(expr.substr(0, i));
        int b = stoi(expr.substr(i+1));
        cout << a + b << endl;
    }
    
    return 0;
}
