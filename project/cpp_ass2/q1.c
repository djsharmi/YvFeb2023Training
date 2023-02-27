#include <iostream>
using namespace std;
 
// Edit MACROs here, according to your Matrix Dimensions for
// mat1[R1][C1] and mat2[R2][C2]
#define R1 2 // number of rows in Matrix-1
#define C1 2 // number of columns in Matrix-1
#define R2 2 // number of rows in Matrix-2
#define C2 2 // number of columns in Matrix-2
 
void mulMat(int mat1[][C1], int mat2[][C2])
{
int rslt[R1][C2];
cout << "Multiplication of given two matrices is:\n";
for (int i = 0; i < R1; i++)
{
for (int j = 0; j < C2; j++)
{
rslt[i][j] = 0;
for (int k = 0; k < R2; k++)
{
rslt[i][j] += mat1[i][k] * mat2[k][j];
}
cout << rslt[i][j] << "\t";
}
cout << endl;
}
}
 
// program code
int main()
{
int mat1[R1][C1] = { { 10, 15 },
                   { 20, 5 } };
int mat2[R2][C2] = { { 6, 14 },
                   { 12, 20 } };
// Function call
mulMat(mat1, mat2);
return 0;
}
