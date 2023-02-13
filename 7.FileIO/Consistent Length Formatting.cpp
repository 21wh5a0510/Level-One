#include<iostream>
#include<fstream>
using namespace std;

void formatText(string inp,string out)
{
	ifstream fin(inp);
	ofstream fout(out);
	string line;
	int a=1;
	while(getline(fin,line))
	{
		for(int i=0;i<line.length();i++)
		{
			if(a==50)
			{
				fout<<line[50]<<"\n";
				a=1;
			}
			else
			{
				fout<<line[i];
				a++;
			}
		}
	}
}
int main()
{
	string first,second;
	getline(cin,first);
	getline(cin,second);
	formatText(first,second);
	return 0;
}
