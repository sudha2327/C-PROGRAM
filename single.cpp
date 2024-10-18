#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;


class mine{
	public:
		struct Node{
			int data;
			struct Node*next;
			
		};
		static Node*head;
	 mine(int newdata){
			struct Node*newNode=(struct Node*)malloc (sizeof(struct Node));
			newNode->data=newdata;
			newNode->next=head;
			head=newNode;
		}
		void display(){
			struct Node*ptr;
			ptr=head;
			while(ptr!=NULL){
				cout<<ptr->data<<" ";
				ptr=ptr->next;
			}
			
		}
	};
 mine::Node*head=NULL;
	
	int main(){
		mine m1=mine(5);
		mine m2=mine(6);
		mine m3=mine(8);
		mine m4=mine(9);
		mine m5=mine(10);
		cout<<"this the linked list";
		m1.display();
		m2.display();
		m3.display();
		m4.display();
		m5.display();
		getch();
		
	}
