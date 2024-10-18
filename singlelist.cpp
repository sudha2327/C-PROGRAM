#include<iostream>
using namespace std;
struct node{
	int data;
	struct node*nxt;
};

struct node*head=NULL;
class single{
	public:
struct node*nnode;
void insert(int ndata){
		
	nnode->data=ndata;
	nnode->nxt=head;
	head=nnode;
}
void display(){
	struct node*ptr;
	ptr=head;
	while(ptr !=NULL){
		cout<<ptr->data<<" ";
		ptr=ptr->nxt;
	}
}
};
int main(){
	single s;
	int n;
	cout<<"enter the values  :"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
      {
      	s.insert(i);
		  }	
		  s.display();
}
