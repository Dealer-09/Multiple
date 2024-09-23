using System;
class MatrixSum
{
    int r, c;
    int[,] x, y, z;
    public MatrixSum(int r1, int c1)
    {
        r = r1;
        c = c1;
        x = new int[r1, c1];
        y = new int[r1, c1];
        z = new int[r1, c1];
    }
    public void Input()
    {
        Console.WriteLine("Enter elements of the 1st Matrix:");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                x[i, j] = int.Parse(Console.ReadLine());
            }
        }

        Console.WriteLine("Enter elements of the 2nd Matrix:");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                y[i, j] = int.Parse(Console.ReadLine());
            }
        }
    }
    public void Calculate()
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                z[i, j] = x[i, j] + y[i, j];
            }
        }
    }
    public void Display()
    {
        Console.WriteLine("Output Matrix:");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                Console.Write(z[i, j] + "\t");
            }
            Console.WriteLine();
        }
    }
    static void Main(string[] args)
    {
        Console.WriteLine("Enter the number of rows and columns of the matrices:");
        int r = int.Parse(Console.ReadLine());
        int c = int.Parse(Console.ReadLine());

        if (r > 0 && c > 0)
        {
            MatrixSum obj = new MatrixSum(r, c);
            obj.Input();
            obj.Calculate();
            obj.Display();
        }
        else
        {
            Console.WriteLine("Error: Rows and columns should be greater than 0");
        }
    }
}
