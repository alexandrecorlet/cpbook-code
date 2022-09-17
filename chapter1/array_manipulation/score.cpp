/*
 * UVa 1585 - Score
 * author: uncoded
 */

#include <cstdio>

int compute_score(int correct_answers) {
    return correct_answers * (correct_answers + 1) / 2;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char str[100];
        scanf("%s", str);
        int i = 0, score = 0, correct_answers = 0;
        while (str[i]) {
            if (str[i] == 'X') {
                score += compute_score(correct_answers);
                correct_answers = 0;
            } else {
                ++correct_answers;
            }
            ++i;
        }
        score += compute_score(correct_answers);
        printf("%d\n", score);
    }
    return 0;
}
