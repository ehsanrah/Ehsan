#include<iostream>
using namespace std;

int mult(int a, int b)
{
	cout<<"function1"<<endl;
	return(a*b);
}

double mult(double a, double b)
{
	cout<<"function2"<<endl;
	return(a*b);
}

int mult(int a, int b, int c)
{
	cout<<"function3"<<endl;
	return(a*b*c);
}

double mult(double a, int b, int c)
{
	cout<<"function4"<<endl;
	return(a*b*c);
}

double mult(int a, double b, double c)
{
	cout<<"function5"<<endl;
	return(a*b*c);
}
int main()
{
	//invoking the function
	cout<<mult(3,7)<<endl;
	cout<<mult(3,7,2)<<endl;
	cout<<mult(2.5,7.5)<<endl;
	return 0;
}
