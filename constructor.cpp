#include<iostream>
using namespace std;
class love{
	private:
		int a;
    public:
      love(int x){
	a=x;
	cout<<"a="<<a;
}
};
int main(){
	love k(14);
	return 0;
}
