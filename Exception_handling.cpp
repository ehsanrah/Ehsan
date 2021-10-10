#include<iostream>
using namespace std;
float divide(float num, float den)
{
	if(den==0)
	{
		throw "Sorry, division by zero is not possible";
	}
	return num/den;
} 
int main()
{
	int a = 10;
	int b = 0;
	int r = 0;
	try
	{
		r = divide(a,b);
		cout<<r<<endl;
	}
	catch(const char* msg)
	{
		cerr<<msg<<endl;
	}
	return 0;
}
