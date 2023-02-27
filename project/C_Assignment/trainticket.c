/* Algorithm
 * get neccassary input from passenger
 * calculate amount
 * store input in file
 */

#include<stdio.h>

#include<string.h>

struct passenger{		//passenger information stored in struct
   char name[30];

   char phoneno[10];

   char gender[10];

   int age;
};

enum choice{AC_CLASS=250,SLEAPER=100,SEATER=50};	//intializing choice enum for class

enum delhiexp{bangalore=100,mumbai=200,kolkata=300,rajasthan=350,gujarat=400,agra=500,delhi=600};	//intializing delhi express for station

int main(){
   struct passenger p;		//creating object for passenger 

   FILE *fp=fopen("bill.txt","w+");	//creating object file and opening file in write mode

   int i;	//declaring required variables

   int choice;

   int seat;

   int cn;	//declaring cn for number of passenger

   int k;

   char source[30];	//declaring source vriable

   char dest[30];	//declaring destination variable

   printf("enter no of pasenger:\n");

   scanf("%d",&cn);

   int seats[cn];

   int sum=0;

   for(k=0;k<cn;k++){

      printf("enter the passenger name:\n");   //getting required passenger details and storing in file

      scanf("%s",p.name);

      printf("enter the passenger phone no:\n");

      scanf("%s",p.phoneno);

      fprintf(fp,"passenger name: %s\n",p.name);

      fprintf(fp,"passenger phone no: %s\n",p.phoneno);

      printf("\n enter gender:\n");

      scanf("%s",p.gender);

      fprintf(fp,"passenger gender:%s\n",p.gender);

      printf("\nenter the age of passenger:\n");

      scanf("%d",&p.age);

      fprintf(fp,"passenger age:%d\n",p.age);
      
      printf("\n stations available are \n1.bangalore\n2.mumbai\n3.kolkata\n4.rajasthan\n5.gujarat\n6.agra\n7.delhi\n");

      printf("enter boarding point:\n");

      scanf("%s",source);

      printf("enter the destination point:\n");

      scanf("%s",dest);

      if(strcmp(dest,"bangalore")==0)		//comparing string and adding value to sum
      {
         sum+=bangalore;
      }
      else if(strcmp(dest,"mumbai")==0)
      {
         sum+=mumbai;
      }
      else if(strcmp(dest,"kolkata")==0)
      {
         sum+=kolkata;
      }
      else if(strcmp(dest,"rajasthan")==0)
      {
	 sum+=rajasthan;
      }
      else if(strcmp(dest,"gujarat")==0){
	 sum+=gujarat;
      }
      else if(strcmp(dest,"agra")==0){
	 sum+=agra;
      }
      else if(strcmp(dest,"delhi")==0){
	 sum+=delhi;
      }
      else {
         sum+=0;
      }
      printf("choose the class \n1.AC CLASS \n2.SEATER \n3.SLEEPER\n");

      scanf("%d",&choice);

      switch(choice){	//choosing a class
         case 1:

            sum+=AC_CLASS;

	    break;

	 case 2:

	    sum+=SEATER;

	    break;

	 case 3:

	    sum+=SLEAPER;

	    break;

	 default:

	    printf("\nenter correct class number\n");
     
      }
      printf("\nenter the seat number between 1 to 64:\n");

      scanf("%d",&seat);

      for(i=0;i<cn;i++){	//checking seat is already booked or not

         if(seats[i]==seat){

            printf("seat is already booked kindly book new seat:");

	    scanf("%d",&seat);

	    break;
         }
      }
      seats[k]=seat;

      printf("\nyour seat is reserved\n");

      fprintf(fp,"seat no:%d\n",seat);
}
fprintf(fp,"\n---------------------------------\n");

fprintf(fp,"Total---------->%d\n",sum);

fprintf(fp,"----------------------------------");

return 0;
}
