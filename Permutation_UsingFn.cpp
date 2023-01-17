#include<iostream>
using namespace std;
int Fac(int n){
	int f=1;
	for(int i=2;i<=n;i++){
		f=f*i;
	}
	return f;
}
int main(){
	int n,r;
	cout<<"Enter the value of 'n' & 'r' ";
	cin>>n>>r;
	int a=Fac(n)/(Fac(r)*Fac(n-r));
	cout<<a;
}
