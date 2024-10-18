#include<iostream>
using namespace std;
class abstract4{
	public:
		virtual void cat()=0;
	 void dog();
};
class sound:public abstract4{
	public:
		void cat(){
			cout<<"cat says-->meoww meoww!!!"<<endl;
		}
		void dog(){
			cout<<"dog says---> woww wooow!!"<<endl;
		}
};
int main(){
	sound s;
	s.cat();
	s.dog();
	return 0;
}
