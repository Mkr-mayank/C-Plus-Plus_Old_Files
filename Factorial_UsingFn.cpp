#include<iostream>
using namespace std;
int Factorial(int n){
	int fac=1,i;
	for(i=2;i<=n;i++){
		fac=fac*i;
	}
	return fac;
}
int main(){
	int n;
	cout<<"Enter the Number ";
	cin>>n;
	int a=Factorial(n);
	cout<<a<<endl;
	return 0;
}