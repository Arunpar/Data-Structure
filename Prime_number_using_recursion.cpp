#include<iostream>
using namespace std;

int checkprime(int ,int);

int main()
{
	int n,check;
	cout<<"Enter the number : ";
	cin>>n;
	check=checkprime(n,n/2);
	if(check==1)
	cout<<n<<" is a Prime Number\n";
	
	else
	cout<<n<<" is not a Prime Number\n";
	return 0;
}
int checkprime(int n ,int i)
{
	if(i==1)
	return 1;
	
	else
	{
		if(n%i==0)
		return 0;
		
		else
		return checkprime(n,i-1);
	}
}

