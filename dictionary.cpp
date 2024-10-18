#include<iostream>
using namespace std;
class heading{
	public:
		string h1;
		void head(){
			cout<<"Enter the heading name:";
			getline(cin,h1);
		}
		
};
class para: public heading{
	   
	   public :
	   	   string p;
	   	   void paragaraph(){
			  
	   	   cout<<"Enter the dictonqary words: ";
	   	   getline(cin,p);
	   }
	   void diplay1(){
	   	cout<<h1<<endl;
	   	cout<<p<<endl;
	   }
};
class end:public heading{
	   public:
	   	string e;
	   	void endline(){
		   
	   	cout<<" the dictionary has been written by :";
	   	getline(cin,e);
	   }
	   void display2(){
	   	
	   	  cout<<e<<endl;
	   }
	   	
};
int main(){
	para p1;
	end e1;
	p1.head();
	p1.paragaraph();
	e1.endline();
	p1.diplay1();
	e1.display2();
	return 0;
}
