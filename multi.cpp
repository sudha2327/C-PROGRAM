#include<iostream>
#include<conio.h>
using namespace std;
class sudhagar{
	public:
		mult(int a, int b)
		{
			if(b==0)
			   return 0;
			if(b>0)
			{
				int c =a+mult(a,b-1);
				 return(c);
			}
			 
		}
};
int main()
{   
    int values;
	sudhagar s;
	values=s.mult(22,3);
	cout<<"values are"<<values;
	getch();
}
