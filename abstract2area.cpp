#include<iostream>
#include <bits/atomic_lockfree_defines.h>
using namespace std;
class abstractexample2{
	protected:
	  int height,width,a;
	public:
		virtual int area()=0;
};
class calc : public abstractexample2{
	public:
		int  area(){
			cout<<"enter the height :"<<endl;
			cin>>height;
			cout<<"enter the width value :"<<endl;
			cin>>width;
			a=height*width;
			return a;
			
		}
};
int main(){
	calc c;
	c.area();
	cout<<c.area();
	return 0;
}
