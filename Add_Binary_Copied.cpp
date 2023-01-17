#include<iostream>
using namespace std;
int rev(int n){
	int ans=0;
	while(n>0){
		int r=n%10;
		ans=ans*10+r;
		n=n/10;
	}
	return ans;
}
int AddBin(int a,int b){
	int ans=0;
	int c=0;
	while(a>0 && b>0){
		if(a%2==0 && b%2==0){
			ans=ans*10+c;
			c=0;
		}
		else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0)){
			if(c==1){
				ans=ans*10+0;
				c=1;
			}
			else{
				ans=ans*10+1;
				c=0;
			}
		}
		else{
			ans=ans*10+c;
			c=1;
		}
		a=a/10;
		b=b/10;
	}
	while(a>0){
		if(c==1){
			if(a%2==1){
				ans=ans*10+0;
				c=1;
			}
			else{
				ans=ans*10+1;
				c=0;
			}
		}
		else{
			ans=ans*10+(a%2);
		}
		a=a/10;
	}
	while(b>0){
		if(c==1){
			if(b%2==1){
				ans=ans*10+0;
				c=1;
			}
			else{
				ans=ans*10+1;
				c=0;
			}
		}
		else{
			ans=ans*10+(b%2);
		}
		b=b/10;
	}
	if(c==1){
		ans=ans*10+1;
	}
	ans=rev(ans);
	return ans;
}
int main(){
	int a,b;
	cout<<"Enter two Binary Numbers: ";
	cin>>a>>b;
	cout<<AddBin(a,b)<<endl;
	return 0;
}