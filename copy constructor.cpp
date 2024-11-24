#include<iostream>
using namespace std;
class box{
	private:
		int a;
		public:
			box(int x){
				a=x;
				cout<<"a is"<<a<<endl;
				
			}
			box(box &x){
				a=x.a;
				cout<<"value of a:"<<a;
			}
};
     int main(){
     	box b1(2);
     	box b2(b1);
     	return 0;
	 }
