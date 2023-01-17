#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n, r, a ,ar=0;
	cout<<"Enter a Number ";
	cin>>n;
	a=n;
	while(n>0){
		r=n%10;
		ar=ar+pow(r,3);
		n=n/10;
	}
	if(a==ar){
		cout<<"Armstrong Number ";
	}
	else{
		cout<<"Not An Armstrong Number ";
	}
	return 0;
}