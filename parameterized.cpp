#include<iostream>
using namespace std;
class rectangle{
	private:
		int length,breadth,area;
		public:
			rectangle(int length,int breadth){
		
				cout<<"length and breadth:"<<endl<<length<<endl<<breadth<<endl;
			
			}
			void Area(){
				area=length*breadth;
				cout<<"area:"<<area;
			}
};
 int main(){
 	rectangle b1(100, 200);
 	b1.Area();
	return 0
 }
