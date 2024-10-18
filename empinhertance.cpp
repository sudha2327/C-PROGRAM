#include<iostream>
using namespace std;
class emp{
	public:
		string name;
		int id;
		
		void get(){
			cout<<"enter the emp name :";
			cin>>name;
			cout<<"enter the emp id :";
			cin>>id;
			
		}
		
};
class salary : public emp{
	public:
		float f,t,c;
		double sal,netpay;
		void get1(){
			cout<<"enter the salary :";
			cin>>sal;
			}
		void calculate(){
				cout<<"enter the Fedral Income Tax : ";
				cin>>f;
				cout<<"enter the FICA Tax :";
				cin>>t;
				cout<<"enter the Co state tax :";
				cin>>c;
				netpay=sal-f-t-c;
			}
			void display(){
				cout<<" Employee Name :"<<name<<endl;
				cout<<"Employee  Id :"<<id<<endl;
				cout<<"Employee Anual salary :"<<sal<<endl;
				cout<<"Employee netpay amount :"<<netpay<<endl;
			}
};
int main(){
	salary s ;
	s.get();
	s.get1();
	s.calculate();
	s.display();
	return 0;
}
