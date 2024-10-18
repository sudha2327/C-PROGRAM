#include<iostream>
using namespace std;

struct list{
	 int data;
	struct list *right;
	struct list *left;
	
};
struct list*first=NULL;
		struct list*last=NULL;
		struct list*node=NULL;
class doublylinked{
	public:
		
		void insert(){
			int n,i;
		cout<<"how many node values you going to insert"<<endl;
		   list *addfirst=new list;
		   cout<<"Enter the values for the node"<<endl;
		   for(i=0;i<n;i++){
		   
		   cin>>addfirst->data;
	}
		   if(first==NULL){
		   	addfirst->left=NULL;
		   		addfirst->right=NULL;
		   			first=addfirst;
		   			last=addfirst;
		   			cout<<"your linkd list is created......"<<endl;
		   }
		   else{
		   	   addfirst->left=NULL;
		   	   	first->left=addfirst;
		   	   	addfirst->right=first;
		   	   	first=addfirst;
		   	   	cout<<"the data has been inserted at the begining............."<<endl;
		   	   	
		   	 
		   }
		}
		void disp(){
			node=first;
			cout<<"list of beginnning data operation data"<<endl;
			while(node!=NULL){
				cout<<node->data<<endl;
				node=node->right;
				
			}
		}
};
class secondpart : public doublylinked{
	    public:
	    	 void insert(){
	    	 	list*addlast=new list;
	    	 	cout<<"enter the node value :"<<endl;
	    	 	cin>>addlast->data;
	    	 	if(first==NULL){
		   	    addlast->left=NULL;
		   		addlast->right=NULL;
		   			first=addlast;
		   			last=addlast;
		   			cout<<"your linkd list is created......"<<endl;
		   }
		   else{
		   	   addlast->right=NULL;
		   	   last->right=addlast;
		   	   addlast->left=last;
		   	     last=addlast;
		   	   	cout<<"the data has been inserted at the last........."<<endl;
		   	   	
		   	 
		   }
	    	 	
			 }
			 void disp(){
			 	node=last;
			 	cout<<"List of the insert end operation"<<endl;
			 	while(node!=NULL){
			 		cout<<node->data<<endl;
			 		node=node->left;
				 }
			 }
			 
};
int main(){
	        
	doublylinked d=doublylinked();
	d.insert();
	secondpart s=secondpart();
	s.insert();
	d.disp();
	s.disp();

}
