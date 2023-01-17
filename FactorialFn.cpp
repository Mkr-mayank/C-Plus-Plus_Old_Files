#include<iostream>
using namespace std;
int fact(int n){
	int i=2, fac=1;
	while(i<=n){
		fac=fac*i;
		i++;
	}
	return fac;
}
int main(){
	int a,b;
	cout<<"Enter two Numbers ";
	cin>>a>>b;
	cout<<"Factorial of "<<a<<" is "<<fact(a)<<" & Factorial of "<<b<<" is "<<fact(b)<<endl;
	return 0;
}