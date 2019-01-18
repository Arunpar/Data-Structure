#include<iostream>
using namespace std;
#define Max 2
class Stack
{
	public:
	int s[Max],item,top,bottom;
	void push();
	void pop();
	void traverse();
	
	public:Stack()
	{
		top=-1;
		bottom=0;
	}
};

void Stack::traverse()
{
	if(top==-1)
	cout<<"Stack is Empty...\n";
	else
	{
	cout<<"The Stack Formed is :\n";
	for(int i=top;i>=0;i--)
	cout<<s[i]<<" ";
	}
}

void Stack::push()
{
	if(top==Max-1)
	cout<<"Stack is Overflow...\n";
	
	else
	{
		cout<<"Enter the Item : ";
		cin>>item;
		s[++top]=item;
		traverse();
	}
}

void Stack::pop()
{
	if(top==-1)
	cout<<"Stack is Unerflow...\n";
	
	else
	{
		int item=s[top];
		top--;
		traverse();
	}
	
}

int main()
{
	int ch,ch1;
	Stack s;
	do{
		cout<<"---------------------------\n";
		cout<<"Enter 1 to PUSH the Item\n";
		cout<<"Enter 2 to POP the Item\n";
		cout<<"---------------------------\n";
		cout<<"Enter your choice : ";
		cin>>ch;
		if(ch==1)
		s.push();
		
		else if(ch==2)
		s.pop();
		
		else
		cout<<"Wrong Input...\n";
		
		cout<<"\nEnter 1 to continue...\n";
		cin>>ch1;
	}
	while(ch1==1);
	return 0;
}

