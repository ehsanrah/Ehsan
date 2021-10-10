#include<iostream>
using namespace std;
/*
void swap(int x, int y) //pass by value
{
	int temp = x;
	x = y;
	y = temp;
}
*/
/*
void swap(int &x, int &y) //pass by reference
{
	int temp = x;
	x = y;
	y = temp;
}
*/
void swap(int *x, int *y) //pass by reference
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
int main()
{
	int num1 = 10;//20
	int num2 = 20;//10
	
	
	
	cout<<"Before swapping"<<endl;
	cout<<"num1 = "<<num1<<endl;
	cout<<"num2 = "<<num2<<endl;
	
	//swap(num1, num2);//pass by value and reference and address(pointer)
	swap(&num1, &num2);//only for pass by address(pointer)
	cout<<"After swapping"<<endl;
	cout<<"num1 = "<<num1<<endl;
	cout<<"num2 = "<<num2<<endl;
	return 0;
}
