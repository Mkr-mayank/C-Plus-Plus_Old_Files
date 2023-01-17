#include<iostream>
#include<math.h>
using namespace std;
int Bin_Dec(int bin){
	int dec=0,i=0,d;
	while(bin>0){
		d=bin%10;
		dec=dec+d*pow(2,i);
		bin=bin/10;
		i=i+1;
	}
	cout<<"Required Decimal No Is : "<<dec<<endl;
	return dec;
}
int main(){
	int bin;
	cout<<"Enter a Binary Number: ";
	cin>>bin;
	Bin_Dec(bin);
	return 0;
}