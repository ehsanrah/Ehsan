#include<iostream>
using namespace std;

template <typename T, typename U, typename Z>
T add(T x, U y, Z z)
{
	return (x + y + z);
}
int main()
{
//	cout<<"Addition of two numbers= "<<add(3, 6)<<endl;
//	cout<<"Addition of two numbers= "<<add(3.45f, 6.67f)<<endl;
//	cout<<"Addition of two numbers= "<<add(3, 6.67f, 45.54)<<endl;
//	cout<<"Addition of two numbers= "<<add<int>(3, 6)<<endl;
	cout<<"Addition of two numbers= "<<add(3, 6.67, 3.44)<<endl;
	cout<<"Addition of two numbers= "<<add(3., 6.67, 3.44)<<endl;
	cout<<"Addition of two numbers= "<<add<double>(3, 6.67, 3.44)<<endl;
	cout<<"Addition of two numbers= "<<add<int>(3., 6.67, 3.44)<<endl;
	
	return 0;
}
