#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char txt[]="welcome";
	int n=strlen(txt);
	int i;
	for(i=n;i>=1;i--)
	{
		cout.write(txt,i);
		cout<<endl;
		
	}
}
