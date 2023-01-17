#include<iostream>
using namespace std;
int main(){
	int n,c=0;
	cout<<"Enter a No ";
	cin>>n;
	for(int i=2;i<n;i++){
		if(n%i==0){
			c=1;
		}
	}
	if(c==1){
		cout<<"Not a Prime Number";
	}
	else{
		cout<<"Prime Number";
	}
	return 0;
}