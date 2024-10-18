#include<iostream>
using namespace std;
class employee{
	private :
		string emp_name;
		int emp_no;
        double gross_salary,net_pay;
		int salary;
	  public: 
	  employee(string n, int i,int s){
			emp_name=n;
			emp_no=i;
			salary=s;
		}
		void gross(){
			gross_salary=salary+(0.1*salary)+(0.25*salary);
		}
		void netpay(){
			int h,f,d,t,l;
			cout<<"Enter the Health Insurance Premium:";
			cin>>h;
			cout<<"enter FICA Tax:";
			cin>>f;
			cout<<"enter Fedral income tax:";
			cin>>d;
			cout<<"Enter the state Income tax:";
			cin>>t;
			cout<<"Enter the Local Income tax:";
			cin>>l;
			net_pay=gross_salary-h-f-d-t-l;
		}
		void display(){
			cout<<"employee name:"<<emp_name<<endl;
			cout<<"employee id :"<<emp_no<<endl;
			cout<<"employee slary :"<<salary<<endl;
			cout<<"gross salary :"<<gross_salary<<endl;
			cout<<"net pay:"<<net_pay<<endl;
		}
	
};
int main(){
	int i,s;
	string n;
	cout<<"enter the employee name  :";
	cin>>n;
	cout<<"enter the employee id    :";
	cin>>i;
	cout<<"enter the salary  :";
	cin>>s;
	employee e1	=employee(n,i,s);
	e1.gross();
	e1.netpay();
	e1.display();
	return 0;
}

