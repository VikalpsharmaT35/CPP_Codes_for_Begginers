#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c,d;
	int i,j,k;
	cout<<"How many value of x : ";
	cin>>a;
	cout<<"How many value of y : ";
	cin>>b;
	float x[a],y[b],x2[a],x_y[a],newy[a],newsuby[a],sumx=0,sumy=0,sumx2=0,sum_xy=0,m;
	
	x = [20, 30, 40, 50, 60, 70];
	y = [800.3, 800.4, 800.6, 800.7, 800.9, 801.0];
	
	cout<<"\n"<<"Cordinates are : "<<endl;            
	
	for(i=0;i<a;i++)
	{
		cout<<"\t"<<"("<<x[i]<<","<<y[i]<<")"<<endl;             //printing the coordinates
	}
	
	for(i=0;i<a;i++)
	{
		sumx=sumx+x[i];                                        //sum of xi
	}
	//cout<<"Sum of xi is : "<<sumx<<endl;
	
	for(i=0;i<a;i++)
	{
		sumy=sumy+y[i];                                     //sum of yi
	}
	//cout<<"Sum of yi is : "<<sumy<<endl;
	
	
	for(i=0;i<a;i++)
	{
		x2[i]=x[i]*x[i];	                                  //making array with x^2 values
	}
	
	
	for(i=0;i<a;i++)
	{
		sumx2=sumx2+x2[i];                               //sum of x^2 array declared above
	}
	//cout<<"Sum of xi^2 is : "<<sumx2<<endl;
	
	for(i=0;i<a;i++)
	{
		x_y[i]=x[i]*y[i];	                            //making an array of x*y 
	}
	
	for(i=0;i<a;i++)
	{
		sum_xy=sum_xy+x_y[i];                        //sum of array with x*y values
	}
	//cout<<"Sum of xiyi is : "<<sum_xy<<endl;
	
	//printing the table

	int n=a;
	m=((n*sum_xy)-(sumx*sumy))/((n*sumx2)-(sumx*sumx));     //Finding the value of slope
	cout<<"The slope of the coordinated entered by you is : "<<m;
	
	
	float alpha;
	alpha=(sumy-(m*sumx))/n;                                            //Finding the value of y intercept
	cout<<"\n"<<"The y intercept of the coordinates entered by you is : "<<alpha;
	
	for(i=0;i<a;i++)
	{
		newy[i]=(m*x[i]+alpha);                               //Finding the value of new y 
	}
	
	
	for(i=0;i<a;i++)
	{
		newsuby[i]=pow((y[i]-newy[i]),2);                               //Finding the value of new y 
	}
	
	
	cout<<"\n"<<"The new coordinates after calculation are : "<<"\n";
	for(i=0;i<a;i++)
	{
		cout<<"\t"<<"("<<x[i]<<","<<newy[i]<<")"<<endl;
	}
	
	cout<<"\n"<<"The new table is as follows : "<<"\n";
	cout<<"\t x \t given y \t obtained y \t (yi-Yi)^2"<<"\n";
	for(i=0;i<a;i++)
	{
		cout<<"\t "<<x[i]<<"\t\t"<<y[i]<<"\t\t"<<newy[i]<<"\t\t"<<newsuby[i]<<endl;
	}
	
	return 0;
}

