#include <stdio.h>
#define ROW 4
#define COL 4

void rotateMatrix(int m[ROW][COL]) {
    int row = 0, col = 0;
    int prev, curr;
    int lastRow = ROW, lastCol = COL;
    while (row < lastRow && col < lastCol) {
        if (row + 1 == lastRow || col + 1 == lastCol)
            break;
        prev = m[row + 1][col];

        for (int i = col; i < lastCol; i++) {
            curr = m[row][i];
            m[row][i] = prev;
            prev = curr;
        }
        row++;

        for (int i = row; i < lastRow; i++) {
            curr = m[i][lastCol - 1];
            m[i][lastCol - 1] = prev;
            prev = curr;
        }
        lastCol--;

        if (row < lastRow) {
            for (int i = lastCol - 1; i >= col; i--) {
                curr = m[lastRow - 1][i];
                m[lastRow - 1][i] = prev;
                prev = curr;
            }
        }
        lastRow--;

        if (col < lastCol) {
            for (int i = lastRow - 1; i >= row; i--) {
                curr = m[i][col];
                m[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}

void printMatrix(int m[ROW][COL]) {
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main() {
    int mat[ROW][COL] = {
        { 1,  2,  3,  4},
        { 5,  6,  7,  8},
        { 9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    rotateMatrix(mat);
    printMatrix(mat);

    return 0;
}