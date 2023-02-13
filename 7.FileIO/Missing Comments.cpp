#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

void findMissingComments(string inp)
{
	ifstream fin(inp);
	string line;
	string prev="";
	int linenum=0;
	while(getline(fin,line))
	{
		linenum++;
		int pos=0,hash=0;
		pos=line.find("def");
		hash=line.find("#");
		if(line[hash]!='#' && line[pos]=='d' &&line[pos+1]=='e' && line[pos+2]=='f')
		{
			string fname=line.substr(pos+4,line.find("(")-4);
			cout<<fname<<":"<<linenum<<"\n";
		}
		if(line.length()==0)
			prev=" ";
		else
			prev=line;
	}
	fin.close();
}
int main()
{
	string inp_file;
	getline(cin,inp_file);
	findMissingComments(inp_file);
	return 0;
}

