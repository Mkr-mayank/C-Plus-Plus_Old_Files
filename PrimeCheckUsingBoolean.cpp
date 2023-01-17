#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number ";
	cin>>n;
	bool f=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			cout<<"Not a Prime Number";
			f=1;
			break;
		}
	}
	if(f==0){
		cout<<"Prime Number"<<endl;
	}
	return 0;
}