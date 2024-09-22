#include <stdio.h>
void inputMatrix(int rows, int cols, int matrix[rows][cols]);
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int sum[rows][cols]);
void displayMatrix(int rows, int cols, int matrix[rows][cols]);

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);
    
    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];
    printf("Enter elements of first matrix:\n");
    inputMatrix(rows, cols, matrix1);
    printf("Enter elements of second matrix:\n");
    inputMatrix(rows, cols, matrix2);
    
    addMatrices(rows, cols, matrix1, matrix2, sum);
    
    printf("Sum of the two matrices:\n");
    displayMatrix(rows, cols, sum);

    return 0;
}
void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int sum[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void displayMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}
