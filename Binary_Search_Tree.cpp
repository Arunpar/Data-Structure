#include<iostream>
using namespace std;
struct Node
{
	Node *Left;
	int data;
	Node *Right;
}*ptr,*newnode,*temp=NULL,*ptr1;
Node *root=NULL;

int inorder(Node *);

int getnode(int d)
{
	newnode = new Node;
	newnode->Left=NULL;
	newnode->data=d;
	newnode->Right=NULL;	
}

void iempty(int item)
{	getnode(item);
	root=newnode;
	
}

void insertion(int item)
{
	
	ptr=root; 
	if(root==NULL) 
	iempty(item);
	else
	{	
		while(ptr!=NULL)
		{
			if(ptr->data<=item)
			{
				ptr1=ptr;
				ptr=ptr->Right;
			}
			else
			{
				ptr1=ptr;
				ptr=ptr->Left;
			}
		}
		getnode(item);
		if(ptr1->data>item)
		ptr1->Left=newnode;
	
		else 
		ptr1->Right=newnode;
	}
}

 int inorder( Node *ptr)
{
	if(ptr==NULL)
	{
		return 0;
	}
	else
	{
		inorder(ptr->Left);
		cout<<ptr->data<<" ";
		inorder(ptr->Right);
	}
}

int postorder(Node *ptr)
{
	if(ptr==NULL)
	{
		return 0;
	}
	else{
		postorder(ptr->Left);
		postorder(ptr->Right);
		cout<<ptr->data<<" ";
	}
}

int preorder(Node *ptr)
{
	if(ptr==NULL)
	{
		return 0;
	}
	else
	{
		cout<<ptr->data<<" ";
		preorder(ptr->Left);
		preorder(ptr->Right);
	}
}

int main()
{
	int item1,ch;
	
	do{
	cout<<"Enter Item :";
	cin>>item1;
	insertion(item1);
	
	cout<<"---------------------------------";
	cout<<"\n1 to continue. ";
	cout<<"2 to Check Order. ";
	cout<<"\n---------------------------------\n";
	cin>>ch;
	}
	while(ch==1);
		cout<<"\n***************OUTPUT***************\n";
		cout<<"The INORDER TREE is : \n";
		inorder(root);
		cout<<"\n----------------------------------------";
		cout<<"\nThe PREORDER TREE is : \n"; 
		preorder(root);
		cout<<"\n----------------------------------------";
		cout<<"\nThe POSTORDER TREE is : \n"; 
		postorder(root);
		cout<<"\n----------------------------------------";
		return 0;
}
