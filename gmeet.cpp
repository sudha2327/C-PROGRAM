#include<iostream>
using namespace std;
class gmeet{
	public:
		char name[50];
		 int roll_number;
		 char subject[50];
		 char id[50];
		 void get(){
		 	cout<<"enter the studnt name : "<<endl;
		 	cin.getline(name,50);
		 	cout<<"enter the subject prof. name :"<<endl;
		 	cin.getline(subject,30);
		 	cout<<"enter the id of the student :"<<endl;
		 	cin.getline(id,30);
		 	
		 }
		 void display(){
		 	cout<<"student name:"<<name<<endl;
		 	cout<<"roll number :"<<roll_number<<endl;
		 }
};
class fin: public gmeet{
	public:
		void dispalay(){
			cout<<" prof. name :"<<name<<endl;
			cout<<"subject name :"<<subject<<endl;
			cout<<" gmeet id:"<<id<<endl;
		}
};
int main(){
	int a,b,e;
	int i=0,j=0;
	
	cout<<"enter the no.of the student nd prof."<<endl;
	cin>>a;
	cin>>b;
	gmeet gm[100];
	fin fi[100];
	do{
		cout<<"............................................"<<endl;
		cout<<"........Enter the details.................."<<endl;
		cout<<" 1----------> Student details  "<<endl;
		cout<<" 2----------> professors details "<<endl;
		cout<<" 3-----------> Quit"<<endl;
		cout<<"enter your choice :";
		cin>>e;
		if(e==1){
			gm[i].get();
			i++;
		}
		else if(e==2){
		fi[j].get(e);
		j++;
		}
		else{
			cout<<"the gmeet participents are :"<<endl;
			
		}
	}
	while(e==1||e==2);
		cout<<"the professors are:"<<endl;
		for(i=0;i<b;i++){
			gm[i].display();
			
		}
		cout<<"the stusents are :"<<endl;
		for(j=0;j<a;j++){
			gm[i].display();
			
		}
		return 0;
	
}
