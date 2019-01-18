#include<iostream>
using namespace std;
class Dstack
{
	public:
	int n;
	struct Stknode
	{
		int data;
		Stknode *nextnode;
	}*newnode,*Top=NULL,*Bottom=NULL,*temp;
	
	Dstack()
	{
		n=0;	
	}
	
void getnode()
{
	newnode=new Stknode;
	cout<<"Enter the Data : ";
	cin>>newnode->data;
	newnode->nextnode=NULL;
}

void iemptystack()
{
	getnode();
	Top=newnode;
	Bottom=newnode;
	n++;
	traverse();	
}

void traverse()
{
	if(n==0)
	cout<<"Stack is Empty...\n";
	else
	{
		temp=Bottom;
		cout<<"The Stack Formed is :\n";
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->nextnode;	
		}	
	}	
}	

void push()
{
	if(n==0)
	iemptystack();
	else
	{
		getnode();
		Top->nextnode=newnode;
		Top=newnode;
		n++;
		traverse();
	}
}

void pop()
{
	if(n==0)
	cout<<"Stack is Overflow...\n";
	else
	{
		if(Top==Bottom)
		{
			Top=NULL;
			Bottom=NULL;
			n--;
			traverse();
		}
		else
		{
			temp=Bottom;
			while(temp->nextnode!=Top)
			temp=temp->nextnode;
			
			temp->nextnode=NULL;
			Top=temp;
			n--;
			traverse();
		}
	}
}
	
};

int main()
{
	int ch,ch1;
	Dstack s;
	do{
		cout<<"--------------------------\n";
		cout<<"Enter 1 to PUSH THE NODE\n";
		cout<<"Enter 2 to POP THE NODE\n";
		cout<<"--------------------------\n";
		cout<<"Enter Your Choice : ";
		cin>>ch;
		
		if(ch==1)
	 	s.push();
	 	
	 	else if(ch==2)
	    s.pop();
	 	
	 	else
	 	cout<<"\nWrong Choice...";
	 	
	 	cout<<"\nEnter 1 To Continue...\n";
		cin>>ch1;
	}
	while(ch1==1);
	return 0;
}

