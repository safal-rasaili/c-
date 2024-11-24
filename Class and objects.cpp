#include<iostream>
using namespace std;
class employee{
	private:
	int id;
	char name[45];
	char address[45];
	 
	 public:
	 	void getinput();
	 	void getoutput();
	 };
	 int main(){
	 	employee e;
	 	e.getinput();
	 	e.getoutput();
	 	return 0;
	 }
	 
	 void employee::getinput(){
	 	cout<<"enter the details:"<<endl;
	 	cin>>id>>name>>address;
	 }
	 
	 void employee::getoutput(){
	 	cout<<"entered details are:\n"<<id<<endl<<name<<endl<<address;
	 }
	 
	 
	 
