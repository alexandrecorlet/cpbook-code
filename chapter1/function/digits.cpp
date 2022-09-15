#include <bits/stdc++.h>
using namespace std;

int f(string n, string last="", int i=0) {
    return (n == last) ? i : f(to_string(n.length()), n, ++i);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    while (1) {
        string inp;
        cin >> inp;
        if (inp == "END") break;
        cout << f(inp) << '\n';
    }
    return 0;
}
