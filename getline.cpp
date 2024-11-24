#include<iostream>
using namespace std;
int main(){
	int size=15;
	char name[20];
	cout<<"enter your name:";
	cin.getline(name,size);
	cout<<name;
	return 0; 
}
