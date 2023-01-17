#include<iostream>
using namespace std;
void Fibonac(int n){
	int a=0,b=1,i;
	while(i<=n){
		cout<<a<<endl;
		int c=a+b;
		a=b;
		b=c;
		i++;
	}
	return;	
}
int main(){
	int n;
	cout<<"Enter The No of Terms ";
	cin>>n;
	Fibonac(n);
	return 0;
}
