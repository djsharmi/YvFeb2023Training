#include<stdio.h>

void matrix_multiplication(int row,int column,int matrix1[][2],int matrix2[][2]){
   
   int matrix_mul[row][column];		//declaring matrix multiplication result variable

   int i;				//declaring iteration variables i,j,k

   int j;

   int k;

   for(i=0;i<row;i++)			//matrix multiplication operation
   {

      for(j=0;j<column;j++)
      {

	 matrix_mul[i][j]=0;

         for(k=0;k<column;k++)
	 {

	    matrix_mul[i][j]+=matrix1[i][k]*matrix2[k][j];

	 } 
      }
   }
   for(i=0;i<row;i++)			//printing a result
   {

      for(j=0;j<column;j++)
      {

         printf("%d\t",matrix_mul[i][j]);

      }

   }

   printf("\n");
 
}

int main(){
   int row=2;

   int column=2;

   int matrix1[][2]={{10,15},{20,5}};	//intializing 1st matrix with elements

   int matrix2[][2]={{6,14},{12,20}};	//intializing 2nd matrix with elements

   matrix_multiplication(row,column,matrix1,matrix2);	//function call to matrix multiplication

   return 0;
}

