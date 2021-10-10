#include<iostream>
using namespace std;

void swap(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}


int main()
{
	/*
	int num = 10;
	int &num1 =num;//reference- do not consume memory
	
	num1 =1000;
	
	cout<<num<<endl;
	cout<<num1<<endl;
	
	num =100;
	
	cout<<num<<endl;
	cout<<num1<<endl;
	
	int num2 = 70;
	
	//&num1 = num2; //this is not possible with references
	
	cout<<num<<endl;
	cout<<num1<<endl;
	*/
	
	
	int a = 100;
	int b = 200;
	
	swap (a, b);
	
	cout<<"a is "<<a<<endl;
	cout<<"b is "<<b<<endl;
	
	
	
	return 0;
}
