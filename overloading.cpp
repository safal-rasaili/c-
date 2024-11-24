#include<iostream>
using namespace std;
class ABC{
	private:
		int a;
		public:
			ABC(int x){
			a=x;	
			}
			void operator-(){
			a=-a;	
			}
			void display(){
				cout<<a<<endl;
			}
			
};
  int main(){
  	ABC abc(20);
  	abc.display();
  	abc.operator-();
  	abc.display();
   return 0;
   }
  
