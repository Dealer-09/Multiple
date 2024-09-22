#include <stdio.h>

void input(int r, int c, int matrix[r][c], const char* name) {
    printf("Enter elements of the %s Matrix:\n", name);
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void calculate(int r, int c, int matrix1[r][c], int matrix2[r][c], int result[r][c]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void display(int r, int c, int matrix[r][c]) {
    printf("Output Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r, c;
    printf("Enter the number of rows and columns of the matrices:\n");
    scanf("%d %d", &r, &c);
    if (r > 0 && c > 0) {

        int matrix1[r][c], matrix2[r][c], result[r][c];
        input(r, c, matrix1, "1st");
        input(r, c, matrix2, "2nd");

        calculate(r, c, matrix1, matrix2, result);
        display(r, c, result);
    } else {
        printf("Error: Rows and columns should be greater than 0\n");
    }
    return 0;
}
