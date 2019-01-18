#include<iostream>
using namespace std;
#define Max 1
class CircularQueue
{
	public:
	int n,q[Max],item,front,rear;
	void Cenqueue();
	void Cdequeue();
	void traverse();
	
	public:CircularQueue()
	{
		front=0;
		rear=0;
		n=0;
	}
};

void CircularQueue::traverse()
{
	if(n==0)
	cout<<"CircularQueue is Empty...\n";
	else
	{
		int j;
		j=front;
		cout<<"The CircularQueue Formed is :\n";
		for(int i=1;i<=n;i++)
		{
			cout<<q[j]<<" ";
			j=(j+1)%Max;
		}
		
	}
}

void CircularQueue::Cenqueue()
{
	if(n==Max)
	cout<<"CircularQueue is Overflow...\n";
	
	else
	{
		cout<<"Enter the Item : ";
		cin>>item;
		q[rear]=item;
		rear=(rear+1)%Max;
		n++;
		traverse();
	}
}

void CircularQueue::Cdequeue()
{
	if(n==0)
	cout<<"CircularQueue is Unerflow...\n";
	
	else
	{
		int item=q[front];
		front=(front+1)%Max;
		n--;
		traverse();
	}
	
}

int main()
{
	int ch,ch1;
	CircularQueue c;
	do{
		cout<<"---------------------------\n";
		cout<<"Enter 1 to ENQUEUE the Item\n";
		cout<<"Enter 2 to DEQUEUE the Item\n";
		cout<<"---------------------------\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		if(ch==1)
		c.Cenqueue();
		
		else if(ch==2)
		c.Cdequeue();
		
		else
		cout<<"Wrong Input...\n";
		
		cout<<"\nEnter 1 to continue...\n";
		cin>>ch1;
	}
	while(ch1==1);
	return 0;
}

