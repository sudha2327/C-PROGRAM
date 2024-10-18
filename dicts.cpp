#include<iostream>
#include<string.h>
using namespace std;

class dict{
	public:
	const 	string dic[48]={"app","boolean","cpu","desktop","enum","keyborad","computer","laptop","mouse","net","java","c","c++","html","gates","scanner","printer","projector","browser","chrome","autocat","ms office","mail","usp","visual studio","note pad","python","turbo c","antiviuse","caps lock","malware","byte","cache","binary","array","cd","rom","firewall","data","data mainig","data base","encrypt","client","grapics","hack","home page","host"};
    	string w;
		void get(){
			cout<<"Enter the word for serching:";
		    cin>>w;
		}	
};
class search:public dict{
	public:
		int i,flag;
		
		
		void serching(){
			int l;
			l=sizeof(dic)/sizeof(dic[0]);
		
		for(i=0;i<l;i++)
		{
			if(dic[i]==w){
				flag=1;
				
			}
			else{
				continue;
			}
			
		}
		if(flag=1){
			cout<<"your word is avaliable in IT dectinory";
			
		}
		else{
			cout<<"Ooops...your word is not there in IT dectinory.";
		}}
		
};
class mean:public dict{
	 public:
	 	
	 	void get1(){
	 	
		
	 	
         if (w=="app")
		 {
         	 cout<<"an application, especially as downloaded by a user to a mobile device."<<endl;
         	 
         }
        if (w=="boolean")
		{
        	 cout<<"denoting a system of algebraic notation used to represent logical propositions by means of the binary digits 0 (false) and 1 (true), especially in computing and electronics."<<endl;
        	
        }
        if (w=="cpu"){
		     cout<<	"In a computer, the CPU is the part that processes all the data and makes the computer work. CPU is an abbreviation for 'central processing unit'. [computing]"<<endl;
		    
		}
		if (w=="desktop")
		{
			 cout<< "the working area of a computer screen regarded as a representation of a notional desktop and containing icons representing items such as files."<<endl;
		   
		}
		    
		if( w=="enum")
		{
			 cout<<"In computer programming, an enumerated type (also called enumeration, enum, or factor in the R programming language, and a categorical variable in statistics) is a data type consisting of a set of named values called elements, members, enumeral, or enumerators of the type."<<endl;
			
		}
		if (w=="keyborad")
		{
			 cout<<"a panel of keys that operate a computer or typewriter."<<endl;
			
		}
		if (w=="computer")
		{
			  cout<<"an electronic device for storing and processing data, typically in binary form, according to instructions given to it in a variable program."<<endl;
			 
		}
	    if (w=="lap"){
		      cout<<"a computer that is portable and suitable for use while travelling."<<endl;	
			  
		}
		if (w=="mouse"){
		    cout<<"a small rodent that typically has a pointed snout, relatively large ears and eyes, and a long tail."<<endl;
			
		}
	    if (w== "net"&&"chrome"&&"browser"&& "email"){
		      cout<<"this  is used for connectiong your computer to online users";
			  
		}
		if (w=="java" && "c++"&&"html"&&"python"){
		       cout<<"programimg languages"<<endl;
			   
		}
		if (w=="turbo c"){
		     cout<<"this the application for compile c and c++ programimg languages"<<endl;
			 
		}
	    if (w== "scanner"){
	    	 cout<<"Scanner is used for scanning the documents"<<endl;
	    	 
	    }
	    if (w=="printer"){
	    	cout<<"printer is used for print the documents"<<endl;
	    	
	    }
	    if (w=="ms office"){
	    	 cout<<"Microsoft Office, or simply Office, is a family of client software, server software, and services developed by Microsoft. ... Initially a marketing term for an office suite (bundled set of productivity applications), the first version of Office contained Microsoft Word, Microsoft Excel, and Microsoft PowerPoint."<<endl;
	    	 
	    }
	    if (w=="notepad"){
	    	cout<<"this used for wrriting the notes sometime it is best editior for programming languages"<<endl;
	    	
	    }
	    if (w=="antiviruse"){
	    	cout<<" designed to detect and destroy computer viruses."<<endl;
	    
	    }
	    if (w=="malware")
		{
	    	cout<<"software that is specifically designed to disrupt, damage, or gain unauthorized access to a computer system."<<endl;
	    	
	    }
	    if (w=="caps loack")
		{
	    	cout<<"this used for erite the documents in full of upper if"<<endl;
	    	
	    }
	     if (w=="byte")
		{
	    	cout<<"a group of binary digits or bits (usually eight) operated on as a unit."<<endl;
	    	
	    }
	    if (w== "data")
		{
	    	cout<<"Computer data is information processed or stored by a computer."<<endl;
	    	
	    }
	    if (w=="data minig"){
		
	    	cout<<"Data mining is a process of discovering patterns in large data sets involving methods at the intersection of machine learning, statistics, and database systems."<<endl;
	    	
	    }
	    if (w=="cd")
		{
	    	 cout<<"a small plastic disc on which data or music is stored: on CD The user manual is on CD."<<endl;
	    	 
	    }
	    if (w=="data base")
		{
	    	 cout<<"..";
	    	 
	    }
        
	}
};
int main(){
	search s;
	mean m;
	s.get();
	s.serching();
	m.get1();
	return 0;
}
