#include<iostream>

#include<string>

using namespace std;

int main(){
   char str1[]="Programming";		//intializing first string

   char str2[]="is awesome.";		//intializing second string

   int i=0;

   char str_result[20];			//declaring string result

   int j=0;

   char str3[]="Hello world";		//declaring string3

   while(str1[i]!='\0')			//find the length of the string 1
   {
      i++;
   }
   while(str2[j]!='\0')			//concatenate the string2 to end of the string1
   {
      str1[i]=str2[j];

      j++;

      i++;

   }
   cout<<"concatenated string is :"<<str1<<endl;

   i=0;

   while(str3[i]!=' ')			//copy the string before space to str result
   {
      str_result[i]=str3[i];

      i++;
   }

   cout<<"swapped string is: ";

   while(str3[i]!='\0')			//print the string after the space 
   {

      cout<<str3[i];

      i++;
   }
   cout<<" "<<str_result<<endl;		//print the string befor the space 
}

