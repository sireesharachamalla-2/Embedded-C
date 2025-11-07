#include <stdio.h>
#define MAX 10
void display(int n, int mat[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
void rotateClockwise(int n, int mat[MAX][MAX], int res[MAX][MAX]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)                                                     res[j][n - 1 - i] = mat[i][j];
}
void rotateAnticlockwise(int n, int mat[MAX][MAX], int res[MAX][MAX]) {
    for (int i = 0; i < n; i++)                                                     for (int j = 0; j < n; j++)
            res[n - 1 - j][i] = mat[i][j];
}                                                                                
int main() {                                                                    int n;                                                                      int mat[MAX][MAX], rotated[MAX][MAX];                                                                                                                   printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);                                                                                                                                        printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)                                                     for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);                                                                                                                        printf("\nOriginal Matrix:\n");                                             display(n, mat);                                                                                                                                                                                                                    rotateClockwise(n, mat, rotated);
    printf("\nMatrix after 90 degrees clockwise\n");
    display(n, rotated);

    rotateAnticlockwise(n, mat, rotated);
    printf("\nMatrix after 90 degrees anticlockwise\n");
    display(n, rotated);

    return 0;
}