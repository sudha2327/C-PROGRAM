#include<iostream>

using namespace std;
class point{
	public:
		virtual void sample()=0;
};
class exe:public point{
	public:
		void sample(){
			cout<<"sudhagar pgms this about using pointer in abstruct"<<endl;
		}
};
int main(){
	point*p;
	exe e;
	p=&e;
	p->sample();
}
