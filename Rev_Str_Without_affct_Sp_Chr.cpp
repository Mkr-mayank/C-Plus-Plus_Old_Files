
//C++ program to reverse string without affecting it's special character and number
 
#include<bits/stdc++.h>
using namespace std;
void reverse(string s){
    //creating character array of size
    // equal to length of string
    char temp[s.length()];
    int x=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            //storing elements in araay
          temp[x]=s[i];
          x++;
        }
    }
    //reversing the character array
    reverse(temp,temp+x);
 
     
    x=0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){
            //updating the origional string
            s[i]=temp[x];
            x++;
        }
    }
    cout<<"reversed string is: "<<s;
     
}
//driver code
int main() {
string s;
cout<<"Enter a string ";
getline(cin,s);
//function call
reverse(s);
return 0;
}