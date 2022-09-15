#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
    int x[5];
    for (int i = 0; i < 3; ++i)
        scanf("%d", &x[i]);
    char s[5];
    scanf("%s", s);
    sort(x, x+3);
    int i = 0;
    while (s[i]) {
        char ch = s[i++];
        if (ch == 'A')
            printf("%d ", x[0]);
        else if (ch == 'B')
            printf("%d ", x[1]);
        else
            printf("%d ", x[2]);
    }
    printf("\n");
    return 0;
}
