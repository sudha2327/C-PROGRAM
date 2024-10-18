#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class sudha{

	private:
		int roll_number;
	 string name;
	int amount;
	 public:
	 	void setname(string name){
	 		this->name=name;
		 }
		 string getname()
		 {
		 	return name;
		 
		 }
		 
		 void setroll_number(int roll_number){
		 	this->roll_number=roll_number;
		 }
		 int getroll_number()
		 {
		 	return roll_number;
		 }
		 void setamount(int amount){
		 	this->amount=amount;
		 }
		 int getamount()
		 {
		 	return amount;
		 }
		 };
		 int main()
		 {  string name;
		 	sudha s2;
		 	cout<<"enter the student name";
		 	cin>>name;
		 	s2.setname(name);
		 	s2.setroll_number(1907051);
		 	s2.setamount(200000);
		 	cout<<"I AM "<<s2.getname()<<endl;
			 cout<< "MY ROLL NUMBER IS"<<s2.getroll_number()<<endl;
			 cout<<" MY SALARY AMOUNT IS"<<s2.getamount()<<endl;
		 	getch();
		 }
