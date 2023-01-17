#include<iostream>
using namespace std;
int main(){
	char ch, vowel;
	cout<<"Enter an Alphabet ";
	cin>>ch;
	vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(vowel){
		cout<<ch<<" is a Vowel";
	}
	else{
		cout<<ch<<" is a Consonant";
	}
	return 0;
}