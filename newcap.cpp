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
		 int roll_number,amount;
		 	sudha s2;
		 	cout<<"enter the student name";
		 	cin>>name;
		 	s2.setname(name);
		 	cout<<"enter  the student roll no:";
		 	cin>>roll_number;
		 	s2.setroll_number(roll_number);
		 	cout<<"enter you payment";
		 	cin>>amount;
		 	s2.setamount(amount);
		 	cout<<"I AM "<<s2.getname()<<endl;
			 cout<< "MY ROLL NUMBER IS"<<s2.getroll_number()<<endl;
			 cout<<" I WANTS TO PAY THE AMOUNT "<<s2.getamount()<<"FOR MY FEES"<<endl;
		 	getch();
		 }