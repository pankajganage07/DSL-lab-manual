""" Write a Python program to compute following computation on matrix:
a) Addition of two matrices B) Subtraction of two matrices
c) Multiplication of two matrices d) Transpose of a matrix  """


# take input matrix
def input_matrix(n,M):
    for r in range(0,n):
        a=[]
        for c in range(0,n):
           # a[c] = int(input())
           a.append(int(input()))
        M.append(a)
# print matrix
def display_matrix(n,M):
    for r in range(0,n):
        for c in range(0,n):
            print(M[r][c],end=" ")
        print()



#addition of two matrix
def addition(n,M,N,result):
    for r in range(0,n):

        a = []
        for c in range(0,n):
             #result[r][c] = M[r][c] + N[r][c]
             # I think list are unmutable, so i cant make this assignment , it is giving me error msg , its better to append the result
             a.append(M[r][c]+N[r][c])
        result.append(a)



#substraction of two matrix
def substraction(n,M1,M2,R):
    for i in range(0,n):
        a = []
        for j in range(0,n):
            a.append(M1[i][j]-M2[i][j])
        R.append(a)

# transpose of matrix
def transpose(n,M1,R):
    for i in range(0,n):
        a = []
        for j in range(0,n):
            a.append(M1[j][i])
        R.append(a)


#driver program
print("Enter order of matrix: ")
n = int(input())
M1 = []
M2 = []
result = []
print("Enter details of first matrix: ")
input_matrix(n,M1)
display_matrix(n,M1)
print("Enter details of second matrix: ")
input_matrix(n,M2)
display_matrix(n,M2)
print("Addition of two matrix is: ")
addition(n, M1, M2, result)
print(result)
display_matrix(n,result)
print("Substraction of two matrix is: ")
result = []
substraction(n,M1,M2,result)
display_matrix(n,result)
# print("Multiplication of two matrix is: ")
result = []
print("transpose of matrix is: ")
transpose(n,M1,result)
display_matrix(n,result)


