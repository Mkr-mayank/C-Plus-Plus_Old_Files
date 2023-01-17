#include<iostream>
using namespace std;
int Vote(int n){
	if(n>=18){
		cout<<"You Are Eligible For Vote"<<endl;
	}
	else{
		cout<<"You Are Not Eligible For Vote"<<endl;
	}
	return n;
}
int main(){
	int n;
	cout<<"Enter Your Age ";
	cin>>n;
	Vote(n);
	return 0;
}