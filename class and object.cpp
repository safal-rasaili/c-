#include<iostream>
using namespace std;
 class student{
 	public:
 	int roll;
 	char name[10];
 	double height;
 	
 	void getname(){
 		
 		cout<<"the entered name is:"<<name;
	 
	 }
 };
 int main(){
 	student s;
 	s.roll="10";
 	s.name ="safal";
 	s.height="5.7";
 	s.getname();
 	return 0;
 	
 }
