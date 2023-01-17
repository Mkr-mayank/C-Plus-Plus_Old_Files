#include<iostream>
using namespace std;
char Alpha(char ch){
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
		cout<<ch<<" is an Alphabet "<<endl;
	}
	else{
		cout<<ch<<" is Not An Alphabet "<<endl;
	}
	return ch;
}
int main(){
	char n;
	cout<<"Enter a Character ";
	cin>>n;
	cout<<Alpha(n);
	return 0;
}