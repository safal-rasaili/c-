#include<iostream>
using namespace std;
class S{
	private:
		int a;
		public:
			S(int x){
				a=x;
			}
			void operator++(){
				a=++a;
			}
			void display(){
				cout<<a<<endl;
			}
			
};

 int main(){
 	S K(14);
 	K.display();
 	K.operator++();
 	K.display();
 	return 0;
 }
