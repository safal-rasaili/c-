#include<iostream>
using namespace std;
class factorial{
	private:
		int n,fact,i;
		
		public:
			void get_input(){
				cout<<"Enter a no:\n";
				cin>>n;
				
			}
			
			void fact(){
				
				
				for(i=1; i<=n; i++){
					fact*=i;
					
				}
			
			}
				
					
			

			void get_output(){
				cout<<"The factorial of number is :\n"<<fact;
				
			}
		

};
 
   int main(){
   	factorial f;
   	f.get_input();
   	f.fact();
   	f.get_output();
   	return 0;
   }
