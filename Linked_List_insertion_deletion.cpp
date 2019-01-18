#include<iostream>
using namespace std;
class LinkedList
{
	int n;
	public:
	struct Node
	{
		int data;
		Node *nextnode;
	}*newnode,*Start=NULL,*End=NULL,*temp;
	
	LinkedList()
	{
		n=0;
	}
	
void getnode()
{
	newnode=new Node;
	cout<<"Enter the Data : ";
	cin>>newnode->data;
	newnode->nextnode=NULL;	
}

void iemptylist()
{
	getnode();
	Start=newnode;
	End=newnode;
	n++;
	traverse();
}

void traverse()
{
	if(n==0)
	cout<<"List is Empty...\n";
	else
	{
		temp=Start;
		cout<<"The List formed is : \n";
		for(int i=1;i<=n;i++)
		{
			cout<<temp->data<<" ";
			temp=temp->nextnode;
			
		}
	}
}

void insertatfirst()
{
	if(n==0)
	iemptylist();
	else
	{
		getnode();
		newnode->nextnode=Start;
		Start=newnode;
		n++;
		traverse();
	}
}

void insertatpos()
{
	int pos;
	cout<<"Enter the Position where node created : ";
	cin>>pos;
	if(pos==1)
	insertatfirst();
	
	else if(pos==n+1)
	insertatlast();
	
	else if(pos>1 && pos<n+1)
	{
		getnode();
		temp=Start;
		for(int i=1;i<pos-1;i++)
		temp=temp->nextnode;
		
		newnode->nextnode=temp->nextnode;
		temp->nextnode=newnode;
		n++;
		traverse();	
	}
	else
	cout<<"Invalid Position...\n";
}

void insertatlast()
{
	if(n==0)
	iemptylist();
	else
	{
		getnode();
		End->nextnode=newnode;
		End=newnode;
		n++;
		traverse();
	}
}

void deletefirstnode()
{
	if(n==0)
	cout<<"List is Underflow...\n";
	else
	{
		Start=Start->nextnode;
		n--;
		traverse();
	}
}

void deleteanynode()
{
	if(n==0)
	cout<<"List is Underflow...\n";
	else
	{
	int pos;
	cout<<"Enter the position from where node deleted : ";
	cin>>pos;
	if(pos==1)
	deletefirstnode();
	
	else if(pos==n)
	deletelastnode();
	
	else if(pos>1 && pos<n)
	{
		temp=Start;
		for(int i=1;i<pos-1;i++)
		temp=temp->nextnode;
		
		temp->nextnode=temp->nextnode;
		n--;
		traverse();
	}
	else
	cout<<"Invalid Position...\n";
    }
	
}

void deletelastnode()
{
	if(n==0)
	cout<<"List is Underflow...\n";
	else
	{
	if(n==1)
	{
		n--;
		traverse();
	}
	else
	{
		temp=Start;
		while(temp->nextnode!=End)
		temp=temp->nextnode;
		
		temp->nextnode=NULL;
		End=temp;
		n--;
		traverse();
	}
    }
}

};

int main()
{
	int ch,ch1;
	LinkedList l;
	l.iemptylist();
	do{
		cout<<"\n--------------------------------\n";
		cout<<"Enter 1 to INSERT NODE AT FIRST\n";
		cout<<"Enter 2 to INSERT NODE AT ANY POSITION\n";
		cout<<"Enter 3 to INSERT NODE AT LAST\n";
		cout<<"Enter 4 to DELETE FIRST NODE\n";
		cout<<"Enter 5 to DELETE NODE FROM PARTICULAR POSITION\n";
		cout<<"Enter 6 to DELETE LAST NODE\n";
		cout<<"--------------------------------\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		if(ch==1)
		l.insertatfirst();
		
		else if(ch==2)
		l.insertatpos();
		
		else if(ch==3)
		l.insertatlast();
		
		else if(ch==4)
		l.deletefirstnode();
		
		else if(ch==5)
		l.deleteanynode();
		
		else if(ch==6)
		l.deletelastnode();
		
		else
		cout<<"Wrong Input...\n";
		
		cout<<"\nEnter 1 to continue...\n";
		cin>>ch1;
	}
	while(ch1==1);
	return 0;
}
