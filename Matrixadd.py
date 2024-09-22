rows = int(input("Enter number of rows: "))        
cols  = int(input("Enter number of column: "))   #Matrix addition

print() 
print("Enter elements for matrix A")
matrix_A = [[int(input()) for c in range (cols)] for r in range(rows)] 

print() 
print('Enter values for matrix B ')
matrix_B = [[int(input()) for c in range (cols)] for r in range(rows)]

print() 
print('Matrix-A :')
for i in matrix_A:
    print(i)

print() 
print('Matrix-B :')
for i in matrix_B:
    print(i)

result = [[0 for i in range(cols)] for j in range(rows)]

for i in range(rows):
    for j in range(cols):
        result[i][j] = matrix_A[i][j] + matrix_B[i][j]

print()
print('Addition of Matrix-A and Matrix-B is :')

for i in result:
    print(i)