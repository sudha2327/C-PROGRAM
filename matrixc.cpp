#include<iostream>
using namespace std;
class matrix{
	     int **n;
	     public:
	     	matrix(){
	     		int i,j;
	     		n=new int*[3];
				 for(i=0;i<3;i++){
				 	n[i]=new int[3];
				 }
				 //now we r going to give the input
				 cout<<"enter the matrix elements";
					 for(i=0;i<3;i++){
					 	for(j=0;j<3;j++){ 
					 		cin>>n[i][j];
						 }
					 }
				 
			 }
			matrix(matrix  & x)
			{
				int i,j;
	     		n=new int*[3];
				 for(i=0;i<3;i++){
				 	n[i]=new int[3];
				 }
				
					 for(i=0;i<3;i++){
					 	for(j=0;j<3;j++){
					 		n[i][j]=x.n[i][j];
						 }
					 }
				
			}
			void put_matrix();
			friend void add_matrix(matrix,matrix);
};
void matrix::put_matrix()
{
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<n[i][j]<<"    ";
			
		}
			cout<<endl;
	}
}
void add_matrix(matrix s1,matrix s2){
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<s1.n[i][j]+s2.n[i][j]<<" ";
			
		}
		cout<<endl;
	}
}
int main()
{
	matrix m1;
	matrix m2(m1);
	cout<<"now your second copy matrix is:"<<endl;
	m1.put_matrix();
	cout<<"the sum of ur matrix is:"<<endl;
	add_matrix(m1,m2);
}
