#include<iostream>
#include<fstream>
using namespace std;

string head(string in_file)
{
	ifstream fin(in_file);
	string line,output="";
	for(int i=1;i<10;i++)
	{
		if(getline(fin,line))
		{
			//cout<<line<<"\n";
			output+=line+"\n";
		}
	}
	fin.close();
	return output;
}
int main()
{
	string inp;
	getline(cin,inp);
	cout<<head(inp);
	return 0;
}
