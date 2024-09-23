#include <iostream>
using namespace std;
class MatrixSum
{
    int r, c;
    int **x;
    int **y;
    int **z;

public:
    MatrixSum(int r1, int c1)
    {
        r = r1;
        c = c1;
        x = new int *[r];
        y = new int *[r];
        z = new int *[r];
        for (int i = 0; i < r; i++)
        {
            x[i] = new int[c];
            y[i] = new int[c];
            z[i] = new int[c];
        }
    }
    void input()
    {
        cout << "Enter elements of the 1st Matrix:" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> x[i][j];
            }
        }
        cout << "Enter elements of the 2nd Matrix:" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> y[i][j];
            }
        }
    }
    void calculate()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                z[i][j] = x[i][j] + y[i][j];
            }
        }
    }
    void display()
    {
        cout << "Output Matrix:" << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << z[i][j] << "\t";
            }
            cout << endl;
        }
    }
    ~MatrixSum()
    {
        for (int i = 0; i < r; i++)
        {
            delete[] x[i];
            delete[] y[i];
            delete[] z[i];
        }
        delete[] x;
        delete[] y;
        delete[] z;
    }
};
int main()
{
    int r, c;
    cout << "Enter the number of rows and columns of the matrices:" << endl;
    cin >> r >> c;
    if (r > 0 && c > 0)
    {
        MatrixSum obj(r, c);
        obj.input();
        obj.calculate();
        obj.display();
    }
    else
    {
        cout << "Error: Rows and columns should be greater than 0" << endl;
    }
    return 0;
}