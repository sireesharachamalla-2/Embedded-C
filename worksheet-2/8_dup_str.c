#include <stdio.h>
#define MAX 10 
int isSymmetric(int n, int mat[MAX][MAX]) {
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) {
            if (*(*(mat + i) + j) != *(*(mat + j) + i))
                return 0; 
             }
    } 
    return 1; 
 }
 int main() { 
    int n;
    int mat[MAX][MAX]; 
     printf("Enter the size of square matrix (n x n): ");
    scanf("%d", &n); 
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
            scanf("%d", (*(mat + i) + j));
            if (isSymmetric(n, mat))
            printf("The matrix is symmetric.\n");
    else  
    printf("The matrix is not symmetric.\n"); 
    return 0; 
}  