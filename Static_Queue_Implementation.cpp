#include<iostream>
using namespace std;
#define Max 2
class Queue
{
	public:
	int q[Max],item,front,rear;
	void enqueue();
	void dequeue();
	void traverse();
	
	public:Queue()
	{
		front=0;
		rear=0;
	}
};

void Queue::traverse()
{
	if(front==rear)
	cout<<"Queue is Empty...\n";
	else
	{
	cout<<"The Queue Formed is :\n";
	for(int i=front;i<rear;i++)
	cout<<q[i]<<" ";
	}
}

void Queue::enqueue()
{
	if(rear==Max)
	cout<<"Queue is Overflow...\n";
	
	else
	{
		cout<<"Enter the Item : ";
		cin>>item;
		q[rear]=item;
		rear++;
		traverse();
	}
}

void Queue::dequeue()
{
	if(rear==front)
	cout<<"Queue is Unerflow...\n";
	
	else
	{
		int item=q[front];
		front++;
		traverse();
	}
	
}

int main()
{
	int ch,ch1;
	Queue q;
	do{
		cout<<"---------------------------\n";
		cout<<"Enter 1 to ENQUEUE the Item\n";
		cout<<"Enter 2 to DEQUEUE the Item\n";
		cout<<"---------------------------\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		if(ch==1)
		q.enqueue();
		
		else if(ch==2)
		q.dequeue();
		
		else
		cout<<"Wrong Input...\n";
		
		cout<<"\nEnter 1 to continue...\n";
		cin>>ch1;
	}
	while(ch1==1);
	return 0;
}

