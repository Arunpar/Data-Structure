#include<iostream>
using namespace std;
class Dqueue
{
	public:
	int n;
	struct Qnode
	{
		int data;
		Qnode *nextnode;
	}*newnode,*Front=NULL,*Rear=NULL,*temp;
	
	Dqueue()
	{
		n=0;	
	}
	
void getnode()
{
	newnode=new Qnode;
	cout<<"Enter the Data : ";
	cin>>newnode->data;
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
		cout<<"The Queue Formed is :\n";
		for(int i=1;i<=n;i++)
		{
			cout<<temp->data<<" ";
			temp=temp->nextnode;	
		}	
	}	
}	

void enqueue()
{
	if(n==0)
	iemptyqueue();
	else
	{
		getnode();
		Rear->nextnode=newnode;
		Rear=newnode;
		n++;
		traverse();
	}
}

void dequeue()
{
	if(n==0)
	cout<<"Queue is Overflow...\n";
	else
	{
		if(Front==Rear)
		{
			Front=NULL;
			Rear=NULL;
			n--;
			traverse();
		}
		else
		{
			Front=Front->nextnode;
			n--;
			traverse();
		}
	}
}
	
};

int main()
{
	int ch,ch1;
	Dqueue q;
	do{
		cout<<"--------------------------\n";
		cout<<"Enter 1 to ENQUEUE THE NODE\n";
		cout<<"Enter 2 to DEQUEUE THE NODE\n";
		cout<<"--------------------------\n";
		cout<<"Enter Your Choice : ";
		cin>>ch;
		
		if(ch==1)
	 	q.enqueue();
	 	
	 	else if(ch==2)
	    q.dequeue();
	 	
	 	else
	 	cout<<"\nWrong Choice...";
	 	
	 	cout<<"\nEnter 1 To Continue...\n";
		cin>>ch1;
	}
	while(ch1==1);
	return 0;
}

