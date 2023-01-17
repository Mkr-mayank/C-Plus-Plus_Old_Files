#include<iostream>
using namespace std;
int main(){
	int dec,r,i=0;
	string hex="",ch;
	cout<<"Enter a Decimal Number: ";
	cin>>dec;
	while(dec!=0){
		r=dec%16;
		dec=dec/16;
		if(r>9){
			ch='A'+r-10;
			hex=ch+hex;
		}
		else{
			hex=to_string(r)+hex;
		}
		i++;
	}
	cout<<"The Required Hexadecimal Number is: "<<hex<<endl;
	return 0;
}