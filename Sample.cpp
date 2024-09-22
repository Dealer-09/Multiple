#include <iostream>
using namespace std;

void inputMatrix(int rows, int cols, int matrix[][100]);
void addMatrices(int rows, int cols, int matrix1[][100], int matrix2[][100], int sum[][100]);
void displayMatrix(int rows, int cols, int matrix[][100]);

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix1[100][100], matrix2[100][100], sum[100][100];
    
    cout << "Enter elements of first matrix:\n";
    inputMatrix(rows, cols, matrix1);
    cout << "Enter elements of second matrix:\n";
    inputMatrix(rows, cols, matrix2);
    
    addMatrices(rows, cols, matrix1, matrix2, sum);

    cout << "Sum of the two matrices:\n";
    displayMatrix(rows, cols, sum);
    return 0;
}

void inputMatrix(int rows, int cols, int matrix[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}
void addMatrices(int rows, int cols, int matrix1[][100], int matrix2[][100], int sum[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
void displayMatrix(int rows, int cols, int matrix[][100]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
