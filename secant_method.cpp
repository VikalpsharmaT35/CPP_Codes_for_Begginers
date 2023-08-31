
#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

/*Equation to be solved */

#define    f(x)    tan(x) - exp(-x)

using namespace std;

int main()
{
	 float x0, x1, x2, f0, f1, f2, x4;
	 int step = 1, N;
	 
	 /* Setting precision and writing floating point values in fixed-point notation. */
   cout<< setprecision(10)<< fixed;

	 /* Inputs */
	 cout<<"First guess : ";
	 cin>>x0;
	 cout<<"Second guess: ";
	 cin>>x1;
	 cout<<"Convergence Required: ";
	 cin>>x4;
	 cout<<"Enter the number of iterations: ";
	 cin>>N;
	 
	  cout<<"_________________________________________________________"<<endl;


	
	 do
	 {
		  f0 = f(x0);
		  f1 = f(x1);
		  if(f0 == f1)
		  {
			   cout<<"Mathematical Error.";
			   exit(0);
		  }

		  x2 = x1 - (x1 - x0) * f1/(f1-f0);
		  f2 = f(x2);
		  
		 
		  cout<<"Iteration-"<< step<<":\t x2 = "<< setw(10)<< x2<<" and f(x2) = "<< setw(10)<< f(x2)<< endl;

		  x0 = x1;
		
		  x1 = x2;
		

		  step = step + 1;

		  if(step > N)
		  {
			   cout<<"Not Convergent.";
			   exit(0);
		  }
	 }while(fabs(f2)>x4);

	 cout<< endl<<"Root is: "<< x2;

	 return 0;
}
