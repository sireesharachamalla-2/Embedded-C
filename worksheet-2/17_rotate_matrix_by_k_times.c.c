#include <stdio.h>
#define MAX 10
void display(int n, int mat[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}
void rotate90Clockwise(int n, int mat[MAX][MAX]) {
    int temp[MAX][MAX];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            temp[j][n - 1 - i] = mat[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            mat[i][j] = temp[i][j];
}
int main() {
    int n, k;
    int mat[MAX][MAX];

    printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    printf("Enter number of rotations : ");
    scanf("%d", &k);

    k = k % 4;
     for (int i = 0; i < k; i++)
        rotate90Clockwise(n, mat);

    printf("\nMatrix after %d rotation of 90 degrees clockwise:\n", k);
    display(n, mat);

    return 0;
}