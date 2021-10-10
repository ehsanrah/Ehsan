#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	

	string infile;
	string outfile;
	cout<<"enter input file name"<<endl;
	cin>>infile; // My input file is lorem.txt. This file should exist in the directory before running the code 
	cout<<"enter output file name"<<endl;
	cin>>outfile;
	ifstream ifile(infile.c_str());
	ofstream ofile(outfile.c_str());
	
	char c;
	//ifile>>c; // this will ignore spaces and enters
	c = ifile.get(); // this will acknowledge spaces and enters
	while(!ifile.eof())
	{
		if(c>='a' && c<='z')
		{
			c = c - 'a' + 'A';
		}
		ofile<<c;
		//ifile>>c;  // this will ignore spaces and enters
		c=ifile.get(); // this will acknowledge spaces and enters
	} 
	ifile.close();
	ofile.close();

	return 0;
}
