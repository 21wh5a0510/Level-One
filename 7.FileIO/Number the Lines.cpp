#include<iostream>
#include<fstream>
using namespace std;

void numberLines(string inp,string out)
{
	ifstream fin(inp);
	ofstream fout(out);
	string line;
	int a=1;
	while(getline(fin,line))
	{
		fout<<a<<": "<<line<<"\n";
		a++;
	}
	fin.close();
	fout.close();
}
int main()
{
	string in_name,out_name;
	getline(cin,in_name);
	getline(cin,out_name);
	numberLines(in_name, out_name);
	return 0;
}
