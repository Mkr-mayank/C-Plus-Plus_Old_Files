#include<iostream>
using namespace std;
void Odd_Even(int n){
	if(n%2==0){
		cout<<"Even";
	}
	else{
		cout<<"Odd";
	}
	return;
}
int main(){
	int n;
	cout<<"Enter a no ";
	cin>>n;
	Odd_Even(n);
	return 0;
}