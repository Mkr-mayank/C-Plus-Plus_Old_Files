#include<iostream>
#include<math.h>
using namespace std;
int Dec_Bin(int dec){
	int bin=0,r,i=0;
	while(dec!=0){
		r=dec%2;
		bin=bin+r*pow(10,i);
		dec=dec/2;
		i=i+1;
	}
	cout<<"Required Binary Number is: "<<bin<<endl;
	return bin;
}
int main(){
	int dec;
	cout<<"Enter a Decimal Number: ";
	cin>>dec;
	Dec_Bin(dec);
	return 0;
}