#include<iostream>
using namespace std;
int main()
{
	int n1;
	cout<<"Enter the number upto which even number print :";
	cin>>n1;
	cout<<"Even Numbers between 2 to "<<n1 <<": \n";
	for(int i=2;i<n1;i+=2)
	cout<<i<<"  ";
	cout<<"\n-------------------------------------------------------\n";
	
	int n2;
	cout<<"\nEnter the number upto which odd number print :";
	cin>>n2;
	cout<<"Odd Numbers between 1 to "<<n2 <<": \n";
	for(int i=1;i<n2;i+=2)
	cout<<i<<"  ";
}
