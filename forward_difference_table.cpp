#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 float x[100], y[100][100];
 int i,j, n;

 
 cout << "Enter the amount od data that you would like to enter: ";
 cin >> n;                                                               //Taking the input

 cout << "Enter data for X Axis : " << endl;
 for(i=0;i<n;i++)
 {
  cout << "x["<<i<<"] = ";
  cin >> x[i];                                                      //Tking x and y respectively

 }
 
 cout<<"\n";
 cout << "Enter data for Y Axis : " << endl;
 for(i=0;i<n;i++)
 {
 	cout <<"y["<<i<<"] = ";
  	cin >> y[i][0];
 }


 for(i=1;i<n;i++)
 {
  for(j = 0; j < n-i; j++)
  {
   y[j][i] = y[j+1][i-1] - y[j][i-1];                        //Creating the data for difference table
  }
 }

 
 cout << endl << "FORWARD DIFFERENCE TABLE" << endl;
 for(i = 0; i < n; i++)
 {                                             //displaying the forward table for the data entered above
  cout << x[i];
  for(j=0;j<n-i;j++)
  {
   cout <<"\t"<<y[i][j];
  }
  cout << endl;
 }

 return 0;
}

