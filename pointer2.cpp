#include<iostream>
using namespace std;
int main(){
	int a;
	int *b= &a;
	cout<<"enter a number:";
	cin>>a;
	cout<<"number is"<<endl<<*b;
}
