#include<iostream>
#include<string.h>
using namespace std;
class unesco{
	public:
		string nation_name;
			string policy;
		void add_details(){
			
			cout<<"Enter the nation name :"<<endl;
			cin>>nation_name;
			cout<<"enter the policy details which you going to provide for peoples:"<<endl;
			cin>>policy;
			
		}
		void disp(){
			cout<<"......................................................"<<endl;
			cout<< "..................UNESCO NEW MEMBER DETAILS............."<<endl;
			cout<<"Nation name  :"<<nation_name<<endl;
			cout<<"Given policy name : "<<policy<<endl;
		}
};
class funding:public unesco
{
	public: 
	 char para[100];
		double fund;
		
		void add_details(){
			
			
			cout<<"give some words about your policy:"<<endl;
			cin.getline(para,100);
			cout<<"enter the fund for your policy: "<<endl;
			cin>>fund;
		}
		void disp(){
            cout<<"details about the policy :"<<para<<endl;
			cout<<"Given fund for our policy :"<<fund<<endl;
		}
};
int main(){
	unesco u;
	funding f;
	u.add_details();
	f.add_details();
	u.disp();
	f.disp();
	return 0;

}
