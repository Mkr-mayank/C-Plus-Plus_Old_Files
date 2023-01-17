#include<iostream>
using namespace std;
bool prime(int n){
	for(int m=2;m<n;m++){
		if(n%m==0){
			return false;	
		}
    }
	return true;
}
int main(){
	int a,b;
	cout<<"Enter the starting & the ending number ranges ";
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		if(prime(i)){
			cout<<i<<endl;
     	}
	}
	return 0;
}
