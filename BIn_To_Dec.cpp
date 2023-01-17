#include<math.h>
#include<iostream>
using namespace std;
int main(){
	int dec=0, bin, i=0, r;
	cout<<"Enter a Binary Number ";
	cin>>bin;
	while(bin!=0){
		r=bin%10;
		dec=dec+r*pow(2,i);
		bin=bin/10;
		i=i+1;
	}
	cout<<"The required Decimal Number is "<<dec;
	return 0;
}