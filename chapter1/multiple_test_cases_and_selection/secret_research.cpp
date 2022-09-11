/*
 * UVa 621 - Secret Research
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
        string s;
        cin >> s;
        string result = "?";                            // assume experiment was not completed
        int i = s.length() - 1;
        if (s == "1" || s == "4" || s == "78")
            result = "+";
        else if ((i+1 >= 1) && (s[i-1] == '3' && s[i] == '5'))
            result = "-";
        else if ((i+1 >= 3) && (s[0] == '9' && + s[i] == '4'))
            result = "*";
        cout << result << endl;
    }
    return 0;
}
