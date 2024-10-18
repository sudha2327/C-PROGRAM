#include <iostream>
using namespace std;

class tollboth
{ 
private:
       int i,pcar,wpcar;
       float tax;
public:
       tollboth()
       {
              tax=0;
              pcar=0;
              wpcar=0;
              i=0;
       }
       void paycar(int a)
       {
       /*pcar=a;*/
       pcar=pcar+a;
       for(i=0;i<=pcar;i++)
       {
              tax=tax+0.50;
       }
       }
       void withoutpay(int b)
       {
       wpcar=wpcar+b;
       }
       void showdata()
       {
       cout<<"Total no of payed cars are : "<<pcar<<endl;
       cout<<"Total tax is : "<<tax<<endl;
       cout<<"Total no of not payed cars are : "<<wpcar<<endl;
    
       }
};
int main()
{
       tollboth tb;
       char press,input;
       int a,b;
 do{
    
       cout<<"Press 1 for car pay tax"<<endl;
       cout<<"Press 2 for car not pay tax"<<endl;
       cout<<"Press 3 for total tax and Exit"<<endl;
       cin>>press;

       switch(press)
       {
       case '1':
              {
                     cout<<"Enter No of the cars pay tax"<<endl;
                     cin>>a;
                     tb.paycar(a);
                     break;
              }
       case '2':
              {
                     cout<<"Enter No of cars not pay tax"<<endl;
                     cin>>b;
                     tb.withoutpay(b);
                     break;
              }    
       }
       cout<<"Press y to continue and n for terminate"<<endl;
       cin>>input;
       }
       while(input=='y');
       tb.showdata();
    system("pause");
    return 0;
}
