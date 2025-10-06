#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int i, j;
    int **arr;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &rows, &cols);

    arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }
    }

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
     int first = 0, sec = 0;
    if (rows == cols) {
        for (i = 0; i < rows; i++) {
            first += arr[i][i];             // main diagonal
            sec+= arr[i][rows - 1 - i]; // second diagonal
        }

        printf("\nSum of primary diagonal = %d\n",first);
        printf("Sum of second diagonal = %d\n", sec);
    } else {
        printf("\nNot a square matrix\n");
    }

    int max = arr[0][0];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }

    printf("Maximum element in matrix = %d\n", max);

    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    arr = NULL;
    return 0;
}