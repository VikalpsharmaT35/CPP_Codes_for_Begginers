#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 double x[50], y[50][50];
 int i,j, n;

 
 cout << "Enter the amount od data that you would like to enter: ";
 cin >> n;

 cout << "Enter data for X Axis : " << endl;
 for(i = 0; i < n ; i++)
 {
  cout << "x["<<i<<"] = ";
  cin >> x[i];
  
 }
 cout<<"\n";
 cout <<"Enter data for Y Axis : " << endl;
 for(i=0;i<n;i++)
 {
 	cout<<"y["<<i<<"] = ";
  	cin>>y[i][0];
 }


for(i = 1; i < n; i++)
 {
  for(j = n-1; j > i-1; j--)
  {
   y[j][i] = y[j][i-1] - y[j-1][i-1];
  }
 }


 cout<<endl<< "BACKWARD DIFFERENCE TABLE IS : "<<"\n"<<endl;
 for(i = 0; i < n; i++)
 {
  cout << x[i];
  for(j = 0; j <= i ; j++)
  {
   cout << "\t" << y[i][j];
  }
  cout << endl;
 }

 return 0;
}

