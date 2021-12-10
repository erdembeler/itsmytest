#include <iostream>
#include <cmath>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
 {
	int x,n,a;
	cout<<"Please enter n value";
	cin>>n;
    cout<<"Please enter x value";
	cin>>x;
	
	if (n<=2)
	{
		cout<<"n cannot be less than 2";
		return(0);
	}
	else if (n>2)
	 {	
	
	cout<<"Result:";
		if (x<0)
		{
			
			float i,o=1;
			
			for(i=0;i<=n-1;i++)
			{
			 
			 float j,y=0;
			
			for(j=1;j<=n;j++)
			 {
			 	y=y+(x-i+j);  
			 }
			
			o=o*y;
			}
			
			cout<<o<<endl;	
		}
		
		else if (x>=0)
		{
			
			float k=0;
			
			for(float i=1;i<=n-1;i++)
			  {     
				k=x/i+k;
			  }

			 cout<<k<<endl;
		}	
	
	}
	
	 return(0);
 }
 
