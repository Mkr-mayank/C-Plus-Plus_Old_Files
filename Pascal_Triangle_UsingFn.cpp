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
	int i,j,n;
	cout<<"Enter the Number of Lines ";
	cin>>n;
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			int a=Fac(i)/(Fac(j)*Fac(i-j));
			cout<<a<<" ";
		}
		cout<<endl;
	}
	return 0;
}