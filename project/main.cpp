/* Algorithm
 * Get an input from user
 * perform addition operation
 * perform multiplication operation
 */

#include<iostream>		//header file for input and output streams

#include "arithmetic.h"		//user defined header file for defining variables

using namespace std;

int addition(int g_first_operand,int g_second_operand){
   int sum_result;		//declaring sum result

   sum_result=g_first_operand+g_second_operand;	//adding two number store it in sum_result

   return sum_result;		//returning sum result to main function

}

int multiplication(int g_first_operand,int g_second_operand){

   int multiplication_result=0;		//intializing multiplication result to zero

   for(int i=1;i<=g_second_operand;i++)
   {

      multiplication_result+=g_first_operand;	//multiplication operation by adding the first number by second number times

   }

   return multiplication_result;		//returning multiplication result to main function

}


int main(){

   cout<<"enter the first operand value:\n";

   cin>>g_first_operand;		//getting first operand input from the user

   cout<<"enter the second operand value:\n";

   cin>>g_second_operand;		//getting second operand input from the user

   cout<<"Addition of two numbers: "<<addition(g_first_operand,g_second_operand)<<endl;	//function call for addition

   cout<<"Multiplicaion of two numbers: "<<multiplication(g_first_operand,g_second_operand)<<endl;	//function call for multiplication

}
