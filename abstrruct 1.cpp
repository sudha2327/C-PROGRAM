#include<iostream>
using namespace std;
class abstractexample{
	public:
		virtual void display()=0;
};
class exe : public abstractexample{
	public:
		void display(){
			cout<<"this is sudhagar first abstract program"<<endl;
		}
};
int main(){
	 exe e;
	 e.display();
	 return 0;
}
