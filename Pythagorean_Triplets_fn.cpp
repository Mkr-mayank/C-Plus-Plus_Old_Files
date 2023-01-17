#include<iostream>
/*sdf*/
using namespace std;
bool Pyth_Trip(int a, int b, int c){
		int x=max(a,max(b,c));
		int y,z;
		if(x==a){
			y=b;
			z=c;
		}
		else if(x==b){
			y=a;
			z=c;
		}
		else{
			y=a;
			z=b;
		}
		if(x*x==(y*y+z*z)){
			return true;
		}
		else{
			return false;
		}
}
int main(){
	int a, b, c;
	cout<<"Enter Three No ";
	cin>>a>>b>>c;
	if(Pyth_Trip(a,b,c)){
		cout<<"It's a Pythagorean Triplet";
	}
	else{
		cout<<"Not a Pythagorean Triplet";
	}
}