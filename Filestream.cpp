#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
//random file handling
int main()
{
	/*
	ios::in
	ios::out
	ios::app//append
	ios::ate//at the end
	ios::binary//convet txt to binary
	ios::trunc//overwrite preexisting data in file
	*/
	srand(time(NULL));
	fstream file;
	int num = 0;
	file.open("yolo.txt",ios::out);//create txt file
	cout<<"enter the number:"<<endl;
	cin>>num;
	while(num--)
	{
		file<<"Ehsan Rahimi"<<endl;
		file<<rand()%9+1;
		file<<endl;
	}
	
	
	file.close();
	return 0;
}
