#include<iostream>
using namespace std;
int MaxMin(int a,int b,int c){
	int max, min;
	if(a>b){
		if(a>c){
			max=a;
			if(b>c){
				min=c;
			}
			else{
				min=b;
			}
		}
		else{
			max=c;
			min=b;
		}
	}
	else if(b>c){
		max=b;
		if(a>c){
			min=c;
		}
		else{
			min=a;
		}
	}
	else{
		max=c;
		min=a;
	}
	cout<<"Greatest No "<<max<<endl;
	cout<<"Smallest No "<<min<<endl;
	return max;
	return min;
}
int main(){
	int a,b,c;
	cout<<"Enter Three Numbers ";
	cin>>a>>b>>c;
	MaxMin(a,b,c);
	return 0;
}