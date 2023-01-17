#include<iostream>
using namespace std;
int Swap(int a,int b){
	cout<<"Before Swaping "<<a<<' '<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After Swaping "<<a<<' '<<b<<endl;
	return a;
	return b;
}
int main(){
	int a,b;
	cout<<"Enter Two Numbers ";
	cin>>a>>b;
	Swap(a,b);
	return 0;
}