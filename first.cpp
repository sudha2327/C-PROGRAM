#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class hii
{  
     string p_name;
     string p_size;
    
	public: hii(string n,string s)
     {
     	p_name=n;
     	p_size=s;
	 }
     void hellow(){
     	cout<<"hii thias one of the mose"<<p_name<<endl;
	 }
};
int main() 
{
	hii hii1("hii","4764876547");
	return 0;
}
