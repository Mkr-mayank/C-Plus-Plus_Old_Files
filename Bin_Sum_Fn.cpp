#include<iostream>
#include<math.h>
using namespace std;
int Binary_Sum(int b1, int b2){
	int c=0,i=0,s,sum=0,r1,r2;
	
	while(b1!=0 && b2!=0){
		r1=b1%10;
		r2=b2%10;
		if(r1==0 && r2==0){
			if(c==0){
				s=0;
			}
			else{
				s=1;
				c=0;
			}
		}
		else if((r1==0 && r2==1)||(r1==1 && r2==0)){
			if(c==0){
				s=1;
			}
			else{
				s=0;
				c=1;
			}
		}
		else{
			if(c==0){
				s=0;
				c=1;
			}
			else{
				s=1;
				c=1;
			}
		}
		sum=sum+s*pow(10,i);
		b1=b1/10;
		b2=b2/10;
		if(b1==0 && b2==0){
			sum=sum+pow(10,(i+1));
		}
		i++;
	}
	cout<<"The Sum of Binary Numbers is: "<<sum<<endl;
	return sum;
}
int main(){
	int b1,b2;
	cout<<"Enter two Binary Numbers: ";
	cin>>b1>>b2;
	cout<<Binary_Sum(b1,b2)<<endl;
	return 0;
}