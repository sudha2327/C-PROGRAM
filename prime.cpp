#include <iostream> 
#include <bits/localefwd.h>	 
using namespace std;  
int main()  
{  
  int n, i, x=0, flag=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> n;  
  x=n/2;  
  for(i = 2; i <= x; i++)  
  {  
      if(n % i == 0)  
      {  
          cout<<"Given number is not an Prime."<<endl;  
          flag=1;  
          break;  
      }  
  }  
  if (flag==0)  
      cout << "given number is Prime."<<endl;  
  return 0;  
}  
