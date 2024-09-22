import java.util.*;
class Matrix_sum
{
    int r, c, x[][], y[][], z[][];
    Matrix_sum(int r1, int c1)
    {
        r = r1;
        c = c1;
        x = new int[r1][c1];
        y = new int[r1][c1];
        z = new int[r1][c1];
    }
    Scanner sc = new Scanner(System.in);
    void input()
    {
        System.out.println("Enter elements of the 1st Matrix");
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                x[i][j] = sc.nextInt();
        
        System.out.println("Enter elements of the 2nd Matrix");
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                y[i][j] = sc.nextInt();
    }
    void calculate()
    {
        for (int i = 0; i < r; i++)
            for (int j = 0; j < c; j++)
                z[i][j] = x[i][j] + y[i][j];
    }
    void display()
    {
        System.out.println("Output Matrix");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
                System.out.print(z[i][j] + "\t");  // Fixed the indices here
            System.out.println();
        }
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter row and columns of matrix");
        int r = sc.nextInt();
        int c = sc.nextInt();
        if (r > 0 && c > 0)
        {
            Matrix_sum obj = new Matrix_sum(r, c);
            obj.input();
            obj.calculate();
            obj.display();
        }
        else
        {
            System.out.println("Error");
            System.exit(0);
        }
    }
}
