#include<iostream>
#include<conio.h>
#include<math.h>
#include<iomanip>
#define f(x)  x*x*x+x*x-3*x-3
#define g(x)  3*x*x + 2*x -3
using namespace std;
int main()
{
	float xo, e, fo ,go , x, f;
	int s = 1;
	cout<<"Enter the root : ";
	cin>>xo;
	cout<<"Enter the error : ";
	cin>>e;
	do
	{
		fo = f(xo);
		go = g(xo);
		if(go == 0 )
		{
			cout<<"Zero error !! the derivative is zero "<<endl;
			exit(0);
		}
		x = xo - (fo/go);
		cout<<"The root after "<<s<<" iteration is : "<<x<<endl;
		xo = x;
		s = s+1;
		f = f(x);
		
	}
	while(fabs(f)>e);
	
	
	return 0 ;
}
