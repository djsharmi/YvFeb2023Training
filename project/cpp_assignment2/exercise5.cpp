#include<iostream>

using namespace std;

struct node				//creating struct node
{
   int data;				//declaring data 
   struct node* next;			//self referential pointer
};

struct node* head=NULL;			//intializing a header pointer
struct node* temp;			//declaring temporary pointer variable
struct node* temp1;			//declaring temporary_2 variable for iteration

void create(int data){			//creating node
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   if(head==NULL)
   {
      head=newnode;
   }
   else
   {
      for(temp=head;temp->next!=NULL;temp=temp->next);
      temp->next=newnode;
   }
   newnode->next=NULL;
}

void bubblesort(struct node* head){		//bubble sort operation
   int t;
   for(temp=head;temp!=NULL;temp=temp->next){
      for(temp1=temp->next;temp1!=NULL;temp1=temp1->next){
        if(temp->data>temp1->data)
	{
	   t=temp->data;
	   temp->data=temp1->data;
	   temp1->data=t;
	}
      }
   }
}
void print(struct node* head){			//printing a linked list
   for(temp=head;temp!=NULL;temp=temp->next)
   {
      cout<<temp->data<<"\t";
   }
   cout<<"\n";
}
int main()
{
   int n;

   cout<<"enter number of elements:";

   cin>>n;

   int a;
   cout<<"enter the elements:";
   for(int i=0;i<n;i++)
   {
	cin>>a;
	create(a);			//calling a create function
   }
   cout<<"original linked list:";
   print(head);
   bubblesort(head);			//calling bubble sort function
   cout<<"After sorting a linked list:";
   print(head);				//calling print function
}
