#include<iostream>
using namespace std;
class demo{
	int value;
	public:
		demo(int s=0)
		{
			value=s;
		}
		int getvalue() const
{
	 return value;
	}	
};
int main(){
	const demo d(40);
	demo d1(60);
	cout<<"this the value of the urs"<<d.getvalue();
	cout<<"this the another valur of urs"<<d1.getvalue();
	return 0;
}

