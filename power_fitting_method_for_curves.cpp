#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n;
    cout<<"How many data coordinates you would like to enter : ";
    cin>>n;
    float x[10],y[10];                         //Formation of array and a,b,c for use in slope and intercept
    float x1=0,y1=0,x2=0,x3=0,x4=0,xy=0,x2y=0;                 //variables for sums/sigma of xi,yi,xi^2,xiyi etc
	float x_x=0, x_y=0, x_x2=0, x2_y=0, x2_x2=0;
	
	cout<<"\nEnter the x-axis values:\n";                //Values of x to be entered and formation of array
    for (i=0;i<n;i++)
        {
        	cout<<"x"<<i+1<<" : ";
        	cin>>x[i];
		}
        
    cout<<"\nEnter the y-axis values:\n";                //values of y to be entered and formation of array
    for (i=0;i<n;i++)
        {
        	cout<<"y"<<i+1<<" : ";
        	cin>>y[i];
		}
		
	cout<<"The original Coordinates are : "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"\t"<<"("<<x[i]<<","<<y[i]<<")"<<endl;             //printing the coordinates
	}
	
	
	for (i=0;i<n;i++)
    {
        x1=x1+x[i];                               //calculating the value of  sigma(xi)
        y1=y1+y[i];                            //calculating the value of  sigma(yi)
        x2=x2+pow(x[i],2);                    //calculating the value of  sigma(xi^2)
        x3=x3+pow(x[i],3);
		x4=x4+pow(x[i],4);
		xy=xy+(x[i]*y[i]);                   //calculating the value of  sigma(xi*yi)
		x2y=x2y+((pow(x[i],2))*y[i]);   
    }
    
    //Calculating the final coeeficients :
    
    x_x = (x2) - ((pow(x1,2))/n);
    x_y = (xy) - ((x1*y1)/n);
    x_x2 = (x3) - ((x2*x1)/n);
    x2_y = (x2y) - ((x2*y1)/n);
    x2_x2 = (x4) - ((pow(x2,2))/n);
    
    float a, b, c;
    
    a = (x2_y*x_x - x_y*x_x2)/(x_x*x2_x2-pow(x_x2,2));
    
	cout<<"\n"<<"The value of a is : "<<a<<"\n";
	
	b = (x_y*x2_x2 - x2_y*x_x2)/(x_x*x2_x2-pow(x_x2,2));
    
    cout<<"\n"<<"The value of b is : "<<b<<"\n";
    
    c = (y1/n) - b*(x1/n) - a*(x2/n);
    
    cout<<"\n"<<"The value of c is : "<<c<<"\n";
    
    
}

