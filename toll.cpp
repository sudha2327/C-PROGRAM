#include<iostream>
using namespace std;
class TollBooth{
	private:
		int i,pcar,wpcar;
		double tax;
		public:
			TollBooth(){
				tax=0;
				pcar=0;
				wpcar=0;
				
			}
			void paycar(int a){
				pcar=pcar+a;
				for(i=0;i<=pcar;i++){
					tax=tax+0.05;
				}
				void without(int b){
					wpcar=wpcar+b;
				}
				void  diplay(){
					cout<<"total no.of payed car :"<<pcar<<endl;
					cout<<"tital tax is :"<<tax<<endl;
					cout<<"total no of not payed cars :"<<wpcar<<endl;
				}
				
			}
};
int main(){
	TollBooth t;
	char click, enter;
	int a,b;
	do{
	  cout<<"press 1 for car tax"<<endl;
	  cout<<"press 2 for car not pay tax"<<endl;
	  cout<<"press 3 for total tax and exit"<<endl;
	   cin>> click;
	switch(click){
		case '1':
			{
				cout<<"enter no of cars pay tax"<<endl;
				cin>>a;
				tb.paycar(a);
				break;
			}
			case '2':
				{
					cout<<"enter no of cars not pay tax"<<endl;
					cin >>b;
					tb.withoutpay(b);
					break;
				}
	
	}
	}
	cout<<"press yes or y to continue , no or n for end the program"<<endl;
	cin>>enter;
	while(enter=='y'or "yes"){
		tb.showdata();
		system ("pause";
		return 0;)
	}
}
