/*
 * Kattis: Treasure Hunt
 * author: uncoded
 */

#include <cstdio>

bool valid_move(int i, int lb, int ub) {
    return lb <= i && i <= ub;
}

void move(char c, int row, int col, int *i_row, int *i_col) {
    if (c == 'N') 
        --(*i_row);
    else if (c == 'S') 
        ++(*i_row);
    else if (c == 'W')
        --(*i_col);
    else if (c == 'E')
        ++(*i_col);
}

int main() {
    int row, col;
    scanf("%d %d\n", &row, &col);
    char area[row+10][col+10];
    for (int i_row = 1; i_row <= row; ++i_row)
        for (int i_col = 1; i_col <= col; ++i_col)
            scanf("%c\n", &area[i_row][i_col]);
    // find the treasure
    int i_row = 1, i_col = 1, nb_moves = 0;
    while (valid_move(i_row, 1, row) && valid_move(i_col, 1, col)) {
        if (nb_moves > row * col || area[i_row][i_col] == 'T')
            break;
        ++nb_moves;
        move(area[i_row][i_col], row, col, &i_row, &i_col);
    }
    // Result
    if (!valid_move(i_row, 1, row) || !valid_move(i_col, 1, col))
        printf("Out\n");
    else if (nb_moves > row * col)
        printf("Lost\n");
    else
        printf("%d\n", nb_moves);
    return 0;
}
