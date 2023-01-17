#include<iostream>
using namespace std;
int main(){
	int a,b;
	a=10;
	b=20;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After interchange"<<endl;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}
