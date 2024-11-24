#include<iostream>
using namespace std;
class Emp{
	private:
		int num;
		char name[45];
		char address[65];
		
		public:
			void getinput();
			void getoutput();
			
};

int main(){
	
	Emp e;
	e.getinput();
	e.getoutput();
	
	return 0;
}

void Emp::getinput(){
	cout<<"enter the details:"<<endl;
	cin>>num>>name>>address;
}

void Emp::getoutput(){
	cout<<"entered details are:"<<endl<<num<<endl<<name<<endl<<address;
}
