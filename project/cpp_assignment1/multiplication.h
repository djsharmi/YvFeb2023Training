int multiplication(int g_first_operand,int g_second_operand){

   int multiplication_result=0;		//intializing multiplication result to zero

   for(int i=1;i<=g_second_operand;i++)	//multiplication operation is done by repeated addition
   {

      multiplication_result+=g_first_operand;   

   }

   return multiplication_result; //returing multiplication result to main function

}
