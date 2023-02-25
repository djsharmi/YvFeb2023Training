/* Algorithm
 * get an array size and array from user
 * call the sort function and return array address
 * call print function
 * */

#include<iostream>

using namespace std;

void print_array(int size,int *arr){		//function to print the array

   int i;		
   
   cout<<"sorted array:\n";

   for(i=0;i<size;i++)
   {
      printf("%d\t",arr[i]);
   }
   printf("\n");
}
int* sorting(int size,int *arr){
   int i;

   int j;

   int temp;					//declaring temporary variable to store the data temporarly

   for(i=0;i<size;i++)				//sorting operation
   {

      for(j=0;j<size;j++)
      {
	 if(arr[i]<=arr[j])
	 {
            temp=arr[i];

	    arr[i]=arr[j];

	    arr[j]=temp;
	 }

      }

   }
   return arr;					//return an array pointer to main function

}

int main(){
   int size;					//declaring size variable

   int i;

   int *sort_result; 				//declaring pointer variable to store the address of the array pointer
   
   cout<<"enter the array size:\t";

   cin>>size;					//get an input from the user for size

   int arr[size];				//declaring array 

   cout<<"enter the array elements one by one: \n";

   for(i=0;i<size;i++)
   {

      cin>>arr[i];				//getting an array input from the user 

   }

   sort_result=sorting(size,arr);		//calling the sorting function and storing the return address to pointer variable

   print_array(size,sort_result);		//calling the print array function
}
