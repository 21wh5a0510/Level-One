#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void removeComments(string inp,string out)
{
	ifstream fin(inp);
	ofstream fout(out);
	string line;
	while(getline(fin,line))
	{
		int pos=-1;
		pos=line.find("#");
		if(pos==-1)
		{
			fout<<line<<"\n";
		}
		else if(pos>0)
		{
			fout<<line.substr(0,pos)<<"\n";
		}
	}
	fin.close();
	fout.close();
}
int main()
{
	string inp_file,out_file;
	getline(cin,inp_file);
	getline(cin,out_file);
	removeComments(inp_file, out_file);
	return 0;
}

