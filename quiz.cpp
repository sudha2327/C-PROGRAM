#include<iostream>
using namespace std;
class quizassign{
	public:
		virtual void test()=0;
};
class quiz:public quizassign{
public:
	int m;
	int n;
	char name[50],q1,q2,q3,q4,q5;
	void test(){
		cout<<" ....welcome to SVS quiz World...."<<endl;
		cout<<"enter your name";
		cin>>name;
		cout<<" Heartly welcome    "<<name;
		cout<<"   Which class is  used to design the base class ?"<<endl;
		cout<<" a) abstrct class"<<endl;
		cout<<" b) derived class "<<endl;
		cout<<" c) base class "<<endl;
		cout<<" d) derived and base class"<<endl;
		cin>>q1;
		if(q1=='a'){
			m=m+10;
		}else{
			m=m+0;
			}
	    cout<<"  Which is used to create a pure vitrual fucntion ?"<<endl;
	    cout<<" a) $ "<<endl;
	    cout<<" b) =0"<<endl;
	    cout<<" c) &"<<endl;
	    cout<<" d) !"<<endl;
	    cin>>q2;
	    if(q2=='b'){
	    	m=m+10;
		}
		else{
			m=m+n;
		}
		cout<<" Where does the absrtact class  is used? "<<endl;
		cout<<" a) base class only "<<endl;
		cout<<" b)derived class"<<endl;
		cout<<" c)both base and derived class"<<endl;
		cout<<" d) virtual class"<<endl;
		cin>>q3;
		if(q3=='a'){
			m=m+10;
		}
		else{
			m=m+n;
		}
		
	 	cout<<" Which of the following is used to terminate the function declaration ?"<<endl;
	 	cout<<" a) :"<<endl;
	 	cout<<" b) )"<<endl;
	 	cout<<" c) ;"<<endl;
	 	cout<<" d) none of the above"<<endl;
	 	cin>>q4;
	 	if(q4=='c'){
	 		m=m+10;
		 }
		 else{
		 	m=m+n;
		 }
		 cout<<" Which is more effective when calling the functions ? "<<endl;
		 cout<<" a) call by value"<<endl;
		 cout<<" b) call by reference"<<endl;
		 cout<<" c) call by pointer"<<endl;
		 cout<<" d) none of the above"<<endl;
		 cin>>q5;
		 if(q5=='b'){
		 	m=m+10;
		 }
		 else{
		 	m=m+n;
		 }
		 
		 
	} 
};
int main(){
	quiz r;
	r.test();
	return 0;
}
