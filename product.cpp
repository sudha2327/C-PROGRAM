#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class sudhagar{
	public:
		multi(int a, int b)
		{
			if(b==0)
			   return 0;
			if(b>0)
			{
				int c =a+multi(a,b-1);
				 return(c);
			}
			 
		}
};
int main()
{   
    int values,a,b;
    cout <<"enter the first value";
    cin>>a;
    cout<<"enter the second value";
    cin>>b;
	sudhagar s;
	values=s.multi(a,b);
	cout<<"mutlipilcation of the values is"<<values;
	getch();
}
