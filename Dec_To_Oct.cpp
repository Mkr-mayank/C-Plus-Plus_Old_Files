#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int dec,r,oct=0,i=0;
	cout<<"Enter a Decimal Number: ";
	cin>>dec;
	while(dec!=0){
		r=dec%8;
		oct=oct+r*pow(10,i);
		dec=dec/8;
		i++;
	}
	cout<<"The Required Octal Number Is: "<<oct<<endl;
	return 0;
}