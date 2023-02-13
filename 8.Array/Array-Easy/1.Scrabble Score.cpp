#include<bits/stdc++.h>
using namespace std;
int wordScore(string s)
{
 int score=0;
 int letterscores[]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
 for(int i=0;i<s.length();i++)
 {
 	char c=toupper(s[i]);
    score+=letterscores[c-'A'];
 }
 return score;
}
int main()
{
 string str;
 cin>>str;
 cout<<wordScore(str);
}
