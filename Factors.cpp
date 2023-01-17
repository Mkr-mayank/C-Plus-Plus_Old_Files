#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a Number ";
	cin>>n;
	cout<<"The Factors are : ";
	for(int i=2;i<=n;i++){
		if(n%i==0){
			cout<<i<<' ';
		}
	}
	return 0;
}