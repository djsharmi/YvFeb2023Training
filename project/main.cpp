/* Algorithm
 * Get an input from user
 * perform addition operation
 * perform multiplication operation
 */

#include<iostream>		//header file for input and output streams

#include "arithmetic.h"		//user defined header file for defining variables

#include "addition.h"       //addition header file for addition operation

#include "multiplication.h"    //multipliation header file for multiplication operation

using namespace std;

int main(){

   cout<<"enter the first operand value:\n";

   cin>>g_first_operand;		//getting first operand input from the user

   cout<<"enter the second operand value:\n";

   cin>>g_second_operand;		//getting second operand input from the user

   cout<<"Addition of two numbers: "<<addition(g_first_operand,g_second_operand)<<endl;	//function call for addition

   cout<<"Multiplicaion of two numbers: "<<multiplication(g_first_operand,g_second_operand)<<endl;	//function call for multiplication

   cout<<"largest operand:"<<(g_first_operand>g_second_operand)?g_first_operand:g_second_operand;	//largest element between two operand
   //exit main
}
