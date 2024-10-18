#include <iostream>
using namespace std;

class tollboth
{ 
private:
       int i,ncar,mncar;
       float tax;
public:
       tollboth()
       {
              tax=0;
              ncar=0;
              mncar=0;
              i=0;
       }
       void paycar(int a)
       {
       /*ncar=a;*/
       ncar=ncar+a;
       for(i=0;i<=ncar;i++)
       {
              tax=tax+0.50;
       }
       }
       void withoutpay(int b)
       {
       mncar=mncar+b;
       }
       void showdata()
       {
       cout<<"Total no of payed cars are : "<<ncar<<endl;
       cout<<"Total tax is : "<<tax<<endl;
       cout<<"Total no of not payed cars are : "<<mncar<<endl;
    
       }
};
int main()
{
       tollboth tb;
       char press,input;
       int a,b;
 do{
    
       cout<<"Press 1 for car pay the amount"<<endl;
       cout<<"Press 2 for car not pay amount"<<endl;
       cout<<"Press 3 for total amount and Exit"<<endl;
       cin>>press;

       switch(press)
       {
       case '1':
              {
                     cout<<"click No of the cars pay amount"<<endl;
                     cin>>a;
                     tb.paycar(a);
                     break;
              }
       case '2':
              {
                     cout<<"click No of cars not pay amount"<<endl;
                     cin>>b;
                     tb.withoutpay(b);
                     break;
              }    
       }
       cout<<"Press yes means pls click *y to continue and no means pls click *n "<<endl;
       cin>>input;
       }
       while(input=='y');
       tb.showdata();
    system("pause");
    return 0;
}
