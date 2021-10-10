#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
	ofstream ofile;
	ofile.open("pokeman.txt");
	int num;
	cout<< "Please enter the number of writting the sentence: Pokeman! Gotta catch em all " <<endl;
	cin>>num;
	while(num--)
	{
		ofile<<"Pokeman! Gotta catch em all"<<endl;
	}
	
	
	return 0;
}
