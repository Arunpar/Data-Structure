#include<iostream>
using namespace std;
class CircularLL
{
	int n;
	public: 
	struct node
	{ 
	    node *prev;
		int data;
 		node *nextnode;
	} *newnode,*Front=NULL,*Rear=NULL, *temp=NULL;

	CircularLL()
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

void iemptyqueue()
{   
	 getnode();
	 Front=newnode;
	 Rear=newnode;
	 n++;
	 traverse();
}

void traverse()
{
	if(n==0)
	cout<<"Queue is Empty...\n";
	else
	{
	temp=Front;
	cout<<"\nThe Queue formed is :\n";
	while(temp!=NULL)
	{   
		cout<<temp->data<<"  ";
		temp=temp->nextnode;
	}
    }
	
}

void DCenqueue()
{
	if(n==0)
	iemptyqueue();
	else
	{
		getnode();
    	Rear->nextnode=newnode;
		newnode->prev=Rear;
		Rear=newnode;
		n++;
		traverse();
	}
}

void DCdequeue()
{
	if(n==0)
	cout<<"Queue is Overflow...\n";
	else
	{
	if(Front==Rear)
	{
		n--;
		traverse();
		Front->prev=Rear->nextnode;
	}
	else
	{
	Front=Front->nextnode;
	Front->prev=NULL;
	n--;
    traverse();
    }
	}
}

};

int main()
{
	int ch,ch1;
    CircularLL q;
	do{
	 	cout<<"---------------------------\n";
	 	cout<<"Enter 1 to ENQUEUE THE NODE\n";
	 	cout<<"Enter 2 to DEQUEUE THE NODE\n";
	 	cout<<"---------------------------\n";
	 	cout<<"Enter Your Choice : ";
	 	cin>>ch;
	 	
	 	if(ch==1)
	 	q.DCenqueue();
	 	
	 	else if(ch==2)
	 	q.DCdequeue();
	 	
	 	else
	 	cout<<"\nWrong Choice...";
	 	
	 	cout<<"\nEnter 1 To Continue...";
		cin>>ch1;
	 }
	 while(ch1==1);
	 return 0;	
}
