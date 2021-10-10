#include<iostream>
using namespace std;
//signature or prototype or function declaration
int add(int a, int b, int c=10, int d=20);

int main()
{
	cout<<add(10 , 20)<<endl;
	
	
	return 0;
}

//implementation or function definition
int add(int a, int b, int c, int d)// no default argument
{
	return (a+b+c+d);
}
