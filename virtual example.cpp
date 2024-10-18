#include<iostream>
using namespace std;

class base{
	public:
		virtual void print(){
			cout<<"this base site";
			
		}
		void show(){
			cout<<"show the base classs";
		}
};
class derved : public base{
	public:
		void print(){
			cout<<"this print of the siteeeeeeeeeeeee";
		}
		void show(){
			cout<<"show h quhrqubiq";
		}
};
int main(){
	base *ptr;
	derved d;
	ptr=&d;
	ptr->print();
	ptr->show();
}
