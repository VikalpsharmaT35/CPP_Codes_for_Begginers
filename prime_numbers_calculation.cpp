#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	{int n,i,flag=0, j;
    cout<<"Till which number you would like to print the prime numbers : ";
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=2; j<i; j++)
        {
           if(i%j==0)
           {
               flag++;
               break;
           }
        }
        if(flag==0 && i!=1)
            cout<<i<<endl;
        flag = 0;
    }
    cout<<endl;
    return 0;
	}
}

