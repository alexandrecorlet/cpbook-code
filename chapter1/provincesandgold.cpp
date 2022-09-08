/*
 * Kattis: Provinces and Gold
 * author: uncoded
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int g, s, c;
    scanf("%d %d %d", &g, &s, &c);

    int total = g * 3 + s * 2 + c;

    // Compute best victory card he can afford
    string victory = "";
    if (total >= 8)
        victory = "Province";
    else if (total >= 5)
        victory = "Duchy";
    else if (total >= 2)
        victory = "Estate";

    // Compute best treasure card he can afford
    string treasure = "Copper";
    if (total >= 6)
        treasure = "Gold";
    else if (total >= 3)
        treasure = "Silver";
    
    if (!victory.empty())
         victory += " or ";
    victory += treasure;

    printf("%s\n", victory.c_str());

    return 0;
}

