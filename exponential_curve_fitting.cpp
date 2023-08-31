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
    float x[n],y[n],lny[n],a,b,c;                         //Formation of array and a,b,c for use in slope and intercept
    float xsum=0,x2sum=0,ysum=0,xysum=0;                 //variables for sums/sigma of xi,yi,xi^2,xiyi etc
    
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
	
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++"<<endl;
	
        
    for (i=0;i<n;i++)                                   //Calculate the values of ln(yi) and creating an different array
        lny[i]=log(y[i]);
    
    
    for (i=0;i<n;i++)
    {
        xsum=xsum+x[i];                               //calculating the value of  sigma(xi)
        ysum=ysum+lny[i];                            //calculating the value of  sigma(yi)
        x2sum=x2sum+pow(x[i],2);                    //calculating the value of  sigma(xi^2)
        xysum=xysum+x[i]*lny[i];                   //calculating the value of  sigma(xi*yi)
    }
    
    a=(n*xysum-xsum*ysum)/(n*x2sum-xsum*xsum);                 //calculating the slope
    b=(x2sum*ysum-xsum*xysum)/(x2sum*n-xsum*xsum);            //calculating the intercept
    
    c=pow(2.71828,b);                                     //b=ln(c)
    
    float ynew[n];                                     //new array for storing the new values of y after calculation
    
    for (i=0;i<n;i++)
        ynew[i]=c*pow(2.71828,a*x[i]);                    //to calculate y(fitted) at given x points
    cout<<"sno."<<setw(5)<<"x"<<setw(19)<<"y(observed)"<<setw(19)<<"y(fitted)"<<endl;
    cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    
    for (i=0;i<n;i++)
        cout<<i+1<<"."<<setw(8)<<x[i]<<setw(15)<<y[i]<<setw(18)<<ynew[i]<<endl;             //printing the new table with x,old y, andnew y    
    cout<<"\nThe corresponding line is of the form:\n\nlny = "<<a<<"x + ln"<<b<<endl;
    cout<<"\nThe exponential fit is given by:\ny = "<<c<<"e^"<<a<<"x\n";
    
    return 0;
}

