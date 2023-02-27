#include<iostream>

using namespace std;

struct node				//creating struct node
{
   struct node *left; 
   int data;				//declaring data 
   struct node* right;			//self referential pointer
};

struct node* root;			//intializing a header pointer

struct node* create(int data){			//creating node
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=data;
   newnode->left=NULL;
   newnode->right=NULL;
   return newnode;
}
void preorder(struct node* root){	//function to traverse in preorder 
   if(root!=NULL)
   {
      cout<<root->data<<"\t";
      preorder(root->left);
      preorder(root->right);
   }
}
void inorder(struct node* root){	//function to traverse inorder 
   if(root!=NULL)
   {
      inorder(root->left);
      cout<<root->data<<"\t";
      inorder(root->right);
   }

}

void postorder(struct node* root){		//function to traversal in postorder
   if(root!=NULL)
   {
      postorder(root->left);
      postorder(root->right);
      cout<<root->data<<"\t";
   }
}



int main()
{
   root=create(9);
   root->right=create(15);
   root->left=create(4);
   root->right->right=create(17);
   root->right->left=create(12);
   root->left->right=create(6);
   root->left->left=create(2);
   cout<<"\npreorder traversal:"<<endl;
   preorder(root);
   cout<<"\ninorder traversal:"<<endl;
   inorder(root);
   cout<<"\npost order traversal:"<<endl;
   postorder(root);
   cout<<endl;
   return 0;
}
