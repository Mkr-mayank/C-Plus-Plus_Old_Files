#include<math.h>
#include<iostream>
using namespace std;
int main(){
	int dec,bin=0,r,i=0;
	cout<<"Enter a Decimal No ";
	cin>>dec;
	while(dec!=0){
		r=dec%2;
		bin=bin+r*pow(10,i);
		dec=dec/2;
		i=i+1;
	}
	cout<<"The required Binary no is "<<bin;
	return 0;	
}
