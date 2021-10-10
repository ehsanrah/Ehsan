#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	cout<<setfill('`');
	cout<<left;
	cout<<setw(10)<<"c++"<<endl;
	cout<<setw(10)<<"programming"<<endl;
	cout<<setw(10)<<"is"<<endl;
	cout<<setw(10)<<"awesome"<<endl;
	
	system("color 1");
	
	/*
	
	output colors:
	0 = Black       8 = Gray
    1 = Blue        9 = Light Blue
    2 = Green       A = Light Green
    3 = Aqua        B = Light Aqua
    4 = Red         C = Light Red
    5 = Purple      D = Light Purple
    6 = Yellow      E = Light Yellow
    7 = White       F = Bright White
    
    */
	return 0;
}
