#include<iostream>
using namespace std;

int main(){
	int number;
	cout<<"enter the number ;"<<endl;
	cin>>number;
	int x;
	bool flag=true;
	x=number/2;
	for(int i=0;i<=x;i++){
		if(number%i==0){
			
			flag=false;
			break;
		}
		
	}
	if(flag==true){
		cout<<"given number is prime"<<endl;
	}
	else{
	cout<<"given number is not anprime "<<endl;
	}
	return 0;
	
}
