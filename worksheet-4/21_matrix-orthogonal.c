#include <stdio.h>
int main() {
    int n;
    printf("Enter order of square matrix: ");
    scanf("%d", &n);
    int A[10][10], AT[10][10], mul[10][10];
    int i, j, k;
    printf("Enter elements of matrix :\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            AT[i][j] = A[j][i];
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mul[i][j] = 0;
            for (k = 0; k < n; k++) {
                mul[i][j] += AT[i][k] * A[k][j];
            }
        }
    }
    int flag = 1;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((i == j && mul[i][j] != 1) || (i != j && mul[i][j] != 0)) {
                flag = 0;
                break;
            }
        }
        if (!flag)
            break;
    }
    if (flag)
        printf("Matrix is ORTHOGONAL.\n");
    else
        printf("Matrix is NOT orthogonal.\n");
    return 0;
}