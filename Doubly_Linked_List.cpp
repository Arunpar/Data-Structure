#include<iostream>
#include<string.h>
using namespace std;
class DlinkedList
{
	int n;
	public: 
	struct node
	{ 
	    node *prev;
		string data;
 		node *nextnode;
	} *newnode,*Start=NULL,*End=NULL, *temp=NULL;

	DlinkedList()
	{
		n=0;
	}

void getnode()
{   
    newnode =new node;
	cout<<"Enter the Data :";
	cin>>newnode->data;
	newnode->prev=NULL;
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
	cout<<"List Is Empty...\n";
	else
	{
	temp=Start;
	cout<<"The List formed is :\n";
	while(temp!=NULL)
	{   
		cout<<temp->data<<"  ";
		temp=temp->nextnode;
	}
    }
	
}

void insertatfirst()
{
	getnode();
	newnode->nextnode=Start;
	Start->prev=newnode;
	Start=newnode;
	n++; 
	traverse();
}


void insertatpos()
{

	int pos;
	cout<<"Enter The Position :";
	cin>>pos;
	if(pos==1)
	insertatfirst();
	
	else if(pos==n+1)
	insertatlast();
	
	else if(pos>1 && pos<n+1)
	{
		getnode();
		temp=Start;
		for(int i=1;i<=pos-2;i++)
		temp=temp->nextnode;
    
		newnode->nextnode=temp->nextnode;
 		temp->nextnode->prev=newnode;
		temp->nextnode=newnode;
		newnode->prev=temp;
		n++;
		traverse();
	}
	else
    cout<<"\nInvalid Position...\n";
}

void insertatlast()
{
	getnode();
	End->nextnode=newnode;
	newnode->prev=End;
	End=newnode;
	n++;
	traverse();
}

void deletefirst()
{
	if(n<=1)
	{
		n=0;
		traverse();
	}
	else
	{
	Start=Start->nextnode;
	Start->prev=NULL;
	n--;
    traverse();
    }
}

void deleteanydata()
{
	int pos;
	temp=Start;
 	cout<<"Enter The Position :";
  	cin>>pos;
  	if(pos==1)
  	deletefirst();
	
   	else if(pos==n)
	deletelast();
	
	else if(pos>1 && pos<n)
    {
    	
    	for(int i=0;i<pos-2;i++)
		temp=temp->nextnode;

		temp->nextnode=temp->nextnode->nextnode;
    	temp->nextnode->prev=temp;
    	n--;
		traverse();
  	}
	else
	cout<<"Invalid Position...\n"; 
}

void deletelast()
{
	if(n==1)
	{
		n--;
		traverse();
	}
	else
	{
	temp=Start;
	while(temp!=End) 
	temp=temp->nextnode;
	
	cout<<temp->data<<endl;
	End=End->prev;
	cout<<End->data<<endl;
	End->nextnode=NULL;
	n--;
	traverse();
  	}
}

};

int main()
{     
	int ch,ch1;
    DlinkedList s;
	s.iemptylist();

	do{ 
		cout<<"\n-----------------------------\n";
		cout<<"1.Insert At First Position\n";
		cout<<"2.Insert At Particular Position\n";
		cout<<"3.Insert At Last Position\n";
		cout<<"4.Delete From First Position\n";
		cout<<"5.Delete From Any Position\n";
		cout<<"6.Delete From Last Position\n";
		cout<<"-----------------------------\n";
		cout<<"Enter Your Choice : ";
		cin>>ch;
		
		if(ch==1)
		s.insertatfirst();
		
		else if(ch==2)
		s.insertatpos();
		
		else if(ch==3)
		s.insertatlast();
		
		else if(ch==4)
		s.deletefirst();
		
		else if(ch==5)
		s.deleteanydata();
		
		else if(ch==6)
		s.deletelast();
		
		else
		cout<<"\nWrong Choice...";
		
		cout<<"\nEnter 1 To Continue...";
		cin>>ch1;
	}
	while(ch1==1);
	return 0;
}

