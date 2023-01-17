#include<iostream>
using namespace std;
int Series(int n){
	int s;
	s=(n*(n+1))/2;
	cout<<"Sum of First "<<n<<" Terms is "<<s<<endl;
	return s;
}
int main(){
	int n;
	cout<<"Enter The Number of Terms ";
	cin>>n;
	Series(n);
	return 0;
}