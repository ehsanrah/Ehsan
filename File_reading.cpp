#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string filename;
	cin>>filename;
	ifstream ifile;
	ifile.open(filename.c_str());
	char c;
	while(ifile.good())
	{
		ifile.get(c);
		cout<<c;
	}
	return 0;
}
