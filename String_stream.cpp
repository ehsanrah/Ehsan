#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
	int num = 20;
	/*
	string str;
	stringstream sso;
	sso << num;
	str = sso.str();
	
	cout<<str<<endl;
	*/
	string str_num = "20";
	/*
	cout << num <<endl;
	cout << str_num + "1" <<endl;
	*/
	/*
	string str;
	stringstream sso;
	sso << num;
	str = sso.str();
	
	cout<<str+"1"<<endl;//"20"
	*/
	int int_str;
	stringstream sso;
	sso <<str_num;
	sso >> int_str;
	cout<< int_str+1<<endl;
	return 0;
}
