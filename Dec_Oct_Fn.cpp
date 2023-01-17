#include<iostream>
#include<math.h>
using namespace std;
int Dec_Oct(int dec){
	int r,oct=0,i=0;
	while(dec!=0){
		r=dec%8;
		oct=oct+r*pow(10,i);
		dec=dec/8;
		i++;
	}
	cout<<"The Required Octal Number Is: "<<oct<<endl;
	return oct;
}
int main(){
	int dec;
	cout<<"Enter a Decimal Number: ";
	cin>>dec;
	Dec_Oct(dec);
	return 0;
}