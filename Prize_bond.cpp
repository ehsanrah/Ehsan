#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	string filename="prize.txt";
	ifstream ifile;
	ifile.open(filename.c_str());
	cout<<"enter your prize bond number"<<endl;
	int prize =0;
	cin>>prize;
	int num = 0;
	while(ifile.good())
	{
		ifile>>num;
		if(num==prize)
		{
			cout<<"Congratulations!"<<endl<<"It's a match'"<<endl;
			break;
		}
		num++;
	}
	if(prize!=num)
	{
		cout<<"Sorry! Your number does not match"<<endl;
	}
	
	return 0;
}
