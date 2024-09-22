class MatrixSum:
    def _init_(self, r, c):
        if r <= 0 or c <= 0:
            raise ValueError("The number of rows and columns should be greater than 0.")
        self.r = r
        self.c = c
        self.x = [[0 for _ in range(c)] for _ in range(r)]
        self.y = [[0 for _ in range(c)] for _ in range(r)]
        self.z = [[0 for _ in range(c)] for _ in range(r)]

    def input_matrix(self, matrix_name):
        matrix = []
        print(f"Enter elements of the {matrix_name} Matrix:")
        for i in range(self.r):
            row = []
            for j in range(self.c):
                while True:
                    try:
                        val = int(input(f"Element [{i+1}][{j+1}]: "))
                        row.append(val)
                        break
                    except ValueError:
                        print("Invalid input. Please enter an integer.")
            matrix.append(row)
        return matrix

    def input_matrices(self):
        self.x = self.input_matrix("1st")
        self.y = self.input_matrix("2nd")

    def calculate_sum(self):
        for i in range(self.r):
            for j in range(self.c):
                self.z[i][j] = self.x[i][j] + self.y[i][j]

    def display_result(self):
        print("Output Matrix (Sum):")
        for row in self.z:
            print("\t".join(map(str, row)))

if _name_ == "_main_":
    try:
        r = int(input("Enter the number of rows: "))
        c = int(input("Enter the number of columns: "))
        matrix_sum = MatrixSum(r, c)
        matrix_sum.input_matrices()
        matrix_sum.calculate_sum()
        matrix_sum.display_result()
    except ValueError as e:
        print(f"Error: {e}")
