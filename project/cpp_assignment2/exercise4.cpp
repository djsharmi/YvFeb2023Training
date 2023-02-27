/* Algorithm
 * read the file
 * change the first charachter to upper case
 * write into another file
 * */

#include<iostream>

#include<string>

#include<fstream>		//included for input output file streams

using namespace std;

int main(){

   ifstream file_in;		//creating object to access input file stream

   ofstream file_out;		//creating object to access output file stream

   char line;			//declaring charachter

   file_in.open("file1_In.txt",ios::in);	//open a file in read mode

   file_out.open("file1_Out.txt",ios::out);	//open a file in write mode

   bool newline=true;				//declaring variable to check newline or not

   while(file_in.get(line))			//reading the charachter one by one
   {
      if(line=='\n')				//checking the charachter is newline or not
      {
	 file_out.put('\n');

         newline=true;				

	 continue;
      }
      if(newline==true)				//if it is newline change character to uppercase and write into file
      {
	 file_out.put(toupper(line));
      }
      else
      {
         file_out.put(line);			//otherwise write into file
      }

      newline=false;

   }

   cout<<"FILE CONTENT IS COPIED TO ANOTHER FILE SUCCESFULLY"<<endl;

   file_in.close();				//close input and output file

   file_out.close();

   return 0;
    
}
