#include<iostream>
using namespace std;
string Dec_Hex(int dec){
	int r,i=0;
	string hex="",ch;
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
	return hex;
}
int main(){
	int dec;
	cout<<"Enter a Decimal Number: ";
	cin>>dec;
	Dec_Hex(dec);
	return 0;
}