#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n,m,o,p,i,j;
	cout<<"For matrix A "<<"\n";
	cout<<"Enter the number of coloums you would like to have in matrix A (i) : ";
	cin>>n;
	cout<<"Enter the number of rows you would like to have in matrix A (j) : ";
	cin>>m;
	cout<<"For matrix B "<<"\n";
	cout<<"Enter the number of coloums you would like to have in matrix B (i) : ";
	cin>>o;
	cout<<"Enter the number of rows you would like to have in matrix B (j) : ";
	cin>>p;
	
	if((n==o) & (m==p))
		{
			cout<<"For matrix A : "<<"\n";
			int a[n][m];
			for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				cout<<"Enter the element a["<<i<<"]"<<"["<<j<<"] : ";
				cin>>a[i][j];	
			}
			
			cout<<"\n"<<"For matrix B : "<<"\n";
			int b[o][p];
			for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				cout<<"Enter the element a["<<i<<"]"<<"["<<j<<"] : ";
				cin>>b[i][j];	
			}
			
			int x=o,y=p;
			int sum[x][y];
			for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				sum[i][j]=a[i][j]+b[i][j];	
			}
			
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					cout<<sum[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
	else
		{
			cout<<"They can Not be ADDED!!";
		}
	return 0;
}

