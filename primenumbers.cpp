#include<iostream>
using namespace std;
class prime{
	public:
		int number;
	  
	int x=0;
	bool flag=true;

	void primecheck(){
		 cout<<"enter the number ;"<<endl;
	     cin>>number;
		  x=number/2;
		
	for(int i=0;i<=x;i++){
		if(number%i==0){
			cout<<"given number is not an prime number"<<endl;
			flag= false;
			break;
		}
		
	}
	if(flag==true){
		cout<<"given number is prime"<<endl;
	}
		
	}
};
int main(){
	prime p;
	p.primecheck();
	return 0;
	
}
