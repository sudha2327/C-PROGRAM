#include<iostream>
#include<conio.h>
using namespace std;
class sudha{
	  private:
	  int n;
	  int age;
	  public:
	  	void setnum(int n)
	  	{
	  		this->n=n;
		  }
	  	int getnum()
	  	{
	  		return n;
		  }
		  void setage(int age){
		  	this->age=age;
		  }
		  int getage()
		  {
		  	return age;
		  }
		  
	
};
int main()
{
	sudha s1;
	s1.setnum(1907051);
	s1.setage(20);
	cout<<"ur number is "<<s1.getnum();
	cout<<"ur age is "<<s1.getage();
}
