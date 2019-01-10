#include<iostream>
using namespace std;
int main()
{
	int r1,c1,r2,c2;
	cout<<"Enter the row and column of 1st matrix : \n";
	cin>>r1>>c1;
	cout<<"Enter the row and column of 2nd matrix : \n";
	cin>>r2>>c2;
	int a[r1][c1],b[r2][c2];
	int c[r1][c2];
	
	cout<<"Enter the elements of 1st Matrix : \n";
	for(int i=0;i<r1;i++)
	{
		for(int k=0;k<c1;k++)
		cin>>a[i][k];
	}
	cout<<"Enter the elements of 2nd Matrix : \n";
	for(int k=0;k<r2;k++)
	{
		for(int j=0;j<c2;j++)
		cin>>b[k][j];
	}
	
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(int k=0;k<c1;k++)
			c[i][j]+=a[i][k]*b[k][j];
	   }
	}
	
	cout<<"The Mutiplication of Matrices : \n";
	for(int i=0;i<r1;i++)
	{
	for(int j=0;j<c2;j++)
			cout<<c[i][j]<<"  ";
			cout<<"\n";
	}
}
