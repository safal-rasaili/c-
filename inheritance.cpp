#include<iostream>
using namespace std;
class you{

	private:
		int name;
		public:
		void getinfo(){
			cout<<"enter your name:";
			cin>>name;
		}
		void display(){
			cout<<"name is:"<<name;
		}
};

class old:public you{
	private:
		int id;
		
		public:
		void input(){
			cout<<"enter your id:";
			cin>>id;
		}
		  void display(){
		  	cout<<"the id is:"<<id;
		  }
};
   int main(){
   	old o;
   	o.getinfo();
   	o.you::display();
  
   	return 0;
   }
