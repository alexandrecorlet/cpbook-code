/*
 * UVa 1641 - ASCII Area
 * author: uncoded
 */

#include <cstdio>

int main() {
    int h, w;
    while (scanf("%d %d\n", &h, &w) != EOF) {

        double a = 0; 
        bool in = false;
        for (int i = 0; i < h * w; ++i) {
            char c;
            scanf("%c\n", &c); 
            
            if (c == '/' || c == '\\') {
                in = !in; 
                a += 0.5;
            } else if (in) {
                ++a;
            }

            /*
            printf("char = %c\n", c);
            printf("inside polygon? %c\n", in ? 'Y' : 'N');
            */

        }

        printf("%d\n", (int) a);
        //printf("\n");

    }
    return 0;
}
