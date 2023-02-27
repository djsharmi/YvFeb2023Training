#include<iostream>

using namespace std;

struct node				//creating struct node
{
   int data;				//declaring data 
   struct node* next;			//self referential pointer
};

struct node* head=NULL;			//intializing a header pointer
struct node* temp;			//declaring temporary pointer variable

void push(int data){			//creating node
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   if(head==NULL)
   {
      newnode->next=NULL;
   }
   else
   {
      newnode->next=head;
   }
   head=newnode;
}


void print(struct node* head){			//printing a stack
   cout<<"elements in the stack are:\n";
   for(temp=head;temp!=NULL;temp=temp->next)
   {
      cout<<temp->data<<"\t";
   }
   cout<<"\n";
}
void pop(){					//pop function deleting first element
   if(head==NULL)
      cout<<"stack is empty"<<endl;
   else{
      temp=head;
      head=temp->next;
      cout<<temp->data<<"  popped from the stack"<<endl;
      free(temp);
   }
}
void top()
{
   cout<<"Top element is:"<<head->data<<endl;
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
	push(a);			//calling a push function
        cout<<a<<" is pushed to stack"<<endl;
   }
   print(head);				//calling print function
   pop();
   top();				//calling top value
}
