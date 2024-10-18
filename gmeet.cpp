#include<iostream>
using namespace std;
class cla{
   public:
		char name[50];
		int reg;
		char sub[20];
		char id[100];
			void get(){
			cout<<"enter students name \n"<<endl;
			cin.getline(name,50);
			cout<<"enter register number "<<endl;
			cin>>reg;
			}
				void get(int i){
				cout<<"enter faculty name \n"<<endl;
				cin.getline(name,50);
				cout<<"enter subject handled by the faculty \n"<<endl;
				cin.getline(sub,20);
				cout<<"enter mail idthe faculty \n"<<endl;
				cin.getline(id,100);
				}
		void display(){
		cout<<"\n student name:"<<name<<"\n register no:"<<reg<<"\n"<<endl;
		}
		};
		class der:public cla{
		public:
		void display(){
		cout<<"\n faculty name:"<<name<<"\n  subject  :"<<sub<<" \n meet id:"<<id<<"\n"<<endl;
		}
		};
int  main(){
int f;
int s,fa,x;
int i=0,j=0;

cout<<"\n enter no of Students and faculties expected to atten the meeting \n"<<endl;
cin>>s;
cin>>fa;
cla a[100];
der b[100];
do{
cout<<"\n enter details \n"<<"\n enter 1-students \n 2-faculties \n 3-quit"<<endl;
cin>>x;
if(x==1){
a[i].get();
i++;
}
else if(x==2){
b[j].get(x);
j++;
}
else{
cout<<"The meet participants are"<<endl;
}
}while(x==1|| x==2);
cout<<"the faculties are:"<<endl;
for(i=0;i<fa;i++){
b[i].display();
}
cout<<"the Students are:"<<endl;
for(i=0;i<s;i++){
a[i].display();
}
return 0;
}
