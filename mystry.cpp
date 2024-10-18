#include<iostream>
#include <pthread_signal.h>
using namespace std;
int main(){
	int a=50;
	while(true){
		++a;
		if((a%3)==0){
			continue;
		}
		else if(a==500){
			break;
		}
		else if((a%2)==0){
			a+=3;
		}
		else{
			a-=3;
		}
		cout<<a;
	}
	return 0;
}
