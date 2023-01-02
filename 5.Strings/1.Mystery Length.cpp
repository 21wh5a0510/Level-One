#include<bits/stdc++.h>
using namespace std;
string removeMysteryLength(string s)
{
  int length=s.length();
  for(int i=length-1;i>=0;i--)
  {
  	length--;
  	if(length==stoi(s.substr(i)))
  	return s.substr(0,length);
  }
  return "Not Valid";
}
int main(){
	string str;
	cout<<"Enter string:";
	cin>>str;
  cout<<removeMysteryLength(str);	
}
