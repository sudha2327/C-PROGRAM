#include<iostream>
using namespace std;

class vaccine{
	 public:
	  	string c_name;
	  	void get(){
	  		cout<<"Enter the country name:";
	  		cin>>c_name;
		  }
};
class calculate:public vaccine{
	 public:
	 	int  cont;
	 	int s;
	 	void get1(){
		 
	 	int ch,cont;
	 	cout<<".....WELCOME TO INDIA VACCINE TECH....."<<endl;
	 	cout<<" 1 ---> Sputnik V "<<endl;
	 	cout<<" 2---> AZD1222 "<<endl;
	 	cout<<" 3---> Ad5-nCov "<<endl;
	 	cout<<" 4---> CoronoVac "<<endl;
	 	cout<<" 5---> Covaxin  "<<endl;
	 
	 	cout<<"how many vaccine you wants:"<<endl;
	 	cin>>cont;
	 }
	 void pay(){
	 	int ch;
	 		cout<<"enter the number of which vaccine you needs :"<<endl;
	 	cin>>ch;
	 	switch(ch){
	 		case 1:
	 			cout<<"you have choosen Sputnik V vaccine "<<endl;
	 			s=5070*cont;
	 			cout<<"your total Bill payment:"<<s<<endl;
	 			break;
	 		case 2:
	 			cout<<"you have choosen AXD1222 vaccine "<<endl;
	 			s=8500*cont;
	 			cout<<"your total Bill paymeant :"<<s<<endl;
	 			break;
	 		case 3:
	 			cout<<"you have choosen Ads-nCov vaccine "<<endl;
	 			s=4570*cont;
	 			cout<<"your total Bill payment :"<<s<<endl;
	 			break;
	 		case 4:
	 			cout<<"you have choosen CoronoVac vaccine ";
	 			s=7650*cont;
	 			cout<<"your Bill payment :"<<s<<endl;
	 			break;
	 		case 5:
	 			cout<<"you have choosen Covaxin vaccine "<<endl;
	 			s=6780*cont;
	 			cout<<"your Bill payment :"<<s<<endl;
	 			break;
	 		default:
	 			cout<<"can you please choose avalialabe vaccine........"<<endl;
	 			break;
		 }
	 }
	 void dispaly(){
	 	
	 	cout<<"......................................BILL DETAILS..........................."<<endl;
	 	cout<<"Enterd country  name :"<<c_name<<endl;
	 	cout<<"enterd No.of vaccine :"<<cont<<endl;
	 	
	 }
};
int main(){
	calculate c;
	c.get();
	c.get1();
	
	c.dispaly();
	c.pay();
	cout<<".........THANKS FOR VISITING......."<<endl;
	return 0;
}
