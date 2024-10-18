#include<iostream>
#include<conio.h>
#include<string>
class simple{
	  private :
	  	int roll_number;
	  	int amount;
	  int  getrol()const{
	  	return roll_number;
	  }	
public:
	  void setrol(int roll_number){
	  	this->roll_number=roll;
	  }
	  int getamount()const{
	  	 return amount;
	  }
	  void setamount(int amount){
	  	this->amount=amount;
	  }
};
int main()
{
	simple s1;
	s1.setamount(50000);
	s1.setrol(1907051);
	cout<<"ur  roll number is"<<s1.getrol();
	cout<<"ur  amopunt is"<<s1.getamount();
}
