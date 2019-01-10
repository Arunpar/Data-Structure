#include<iostream>
using namespace std;
#define Max 10
class Array
{
    int n,a[Max];
	public:
	void getdata();
	void traverse();
	void insertatfirst();
	void insertatpos();
	void insertatlast();	
	void deletefirstitem();
	void deletelastitem();
	void deleteanyitem();
};

void Array::getdata()
{
	cout<<"Enter The Size Of The Array = ";
	cin>>n;
	if(n<=Max && n!=0)
	{
		cout<<"Enter The Array's Elements :\n";
		for(int i=0;i<n;i++)
		cin>>a[i];
	}
	else
	{
    cout<<"Array Size Must Be Less Than = "<<Max;
    exit(0);
    }
}

void Array::traverse()
{
	if(n==0)
	cout<<"Array Is Empty...\n";
	else
	{
	cout<<"The Elements Of Array Are :\n";
	for(int i=0;i<n;i++)
	cout<<a[i]<<"  ";
	cout<<endl;
    }
}

void Array::insertatfirst()
{
	if(n>=Max)
	cout<<"Array Is Overflow...\n";
	else
	{
	int item;
	cout<<"Enter The Item : ";
	cin>>item;
	for(int i=n;i>=0;i--)
	a[i+1]=a[i];	
	a[0]=item;
	n++;
	traverse();
    }
}
void Array::insertatpos()
{
	if(n>=Max)
	cout<<"Array Is Overflow...\n";
	else
	{
	int pos;
	cout<<"Enter Position Of Item = ";
	cin>>pos;
	
	if(pos>=0 && pos<=n+1)
	{
	int item;
	cout<<"Enter The Item : ";
	cin>>item;
	for(int i=n-1;i>=pos-1;i--)
	a[i+1]=a[i];
	a[pos-1]=item;
	n++;
	traverse();
    }
    else
    cout<<"Invalid Position...\n";
    }
}

void Array::insertatlast()
{
	if(n>=Max)
	cout<<"Array Is Overflow...\n";
	else
	{
	int item;
	cout<<"Enter The Item : ";
	cin>>item;
    a[n]=item;
    n++;
    traverse();
    }
}

void Array::deletefirstitem()
{
	if(n==0)
	cout<<"Array Is Underflow...";
	else
	{
		for(int i=1;i<n;i++)
		a[i-1]=a[i];
		n--;
		traverse();
	}
}
void Array::deleteanyitem()
{
    int pos;
	if(n==0)
	cout<<"Array Is Underflow...";
	else
	{
		cout<<"Enter The Position From Which Item Is To Be Deleted : ";
		cin>>pos;
		if(pos>=0 && pos<=n)
		{
			for(int i=pos;i<n;i++)
			a[i-1]=a[i];
			n--;
			traverse();
		}
		else
		cout<<"Invalid Position...\n";
	}
}

void Array::deletelastitem()
{
	if(n==0)
	cout<<"Array Is Underflow...";
	else
	{
	n--;
	traverse();
    }	
}

int main()
{
	Array a;
	char choice;
	int ch;
	a.getdata();
	a.traverse();
	do{
	    cout<<"\n------------------------------------------\n";
	    cout<<"\nEnter 1 To Insert Item At First Position\n";
	    cout<<"Enter 2 To Insert Item At Particular Position\n";
	    cout<<"Enter 3 To Insert Item At Last Position\n";
	    cout<<"Enter 4 To Delete Item From First Position\n";
	    cout<<"Enter 5 To Delete Item From Given Position\n";
	    cout<<"Enter 6 To Delete Item From Last Position\n";
	    cout<<"\n------------------------------------------\n";
		cout<<"Enter Your Choice :";
	    cin>>ch;
	    switch(ch)
	    {
	    	case 1 : a.insertatfirst();
	    	        break;
	    	
	    	case 2 : a.insertatpos();
	    	        break;
	    	        
	    	case 3 : a.insertatlast();
	    	        break;
	    	        
	    	case 4 : a.deletefirstitem();
	    	        break;
	    	        
	    	case 5 : a.deleteanyitem();
	    	        break;
					
			case 6 : a.deletelastitem();
	    	        break;        
	    	
	    	default : cout<<"Wrong Choice...";
		}
	    cout<<"\nDo You Want To Continue...(Y/N) :-";
	    cin>>choice;
      }
      while(choice=='Y' || choice=='y');
      return 0;
}
