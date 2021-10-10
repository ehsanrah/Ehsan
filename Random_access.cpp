#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
//random file handling
int main()
{
	fstream file;
	int num = 0 ;
	char c;
	
	file.open("mojo.txt",ios::in | ios::out);//create txt file
	
	file.seekg(7,ios::beg);//the location of input pointer	seekg = seekget for reading. beg =begining
	file.seekp(2,ios::beg);//the location of output pointer seekp = seekput for writting
	file<<9; // Writeing to the file in the position of the output pointer
	cout<<file.tellg()<<endl;
	cout<<file.tellp()<<endl;
	
	file.close();
	return 0;
}
