#include<iostream>
using namespace std;
int main(){
	int n, i=2, r=1;
	cout<<"Enter a Number ";
	cin>>n;
	while(i<=n){
		r=r*i;
		i++;
	}
	cout<<"The Factorial of "<<n<<" is "<<r;
	return 0;
}