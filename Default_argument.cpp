#include<iostream>
using namespace std;
int add(int a, int b, int c=10, int d=20)//from right most to left
//int add(int a=0, int b, int c=0, int d=0)//this is not true
{
	return (a+b+c+d);
}
int main()
{
	cout<<add(10 , 20)<<endl;
	
	
	return 0;
}
