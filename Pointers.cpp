#include<iostream>
using namespace std;

int main()
{
	/*
	int num = 10;
	cout<<&num<<endl;
	*/
	/*
	int num = 100;

	int* ptr = nullptr; //&num;//or int *ptr;
	//double
	
	cout<<ptr<<endl;
	*/
	int num =100;
	int* ptr = &num;
	
	cout<<"ptr= "<<ptr<<endl;
	cout<<"&num= "<<&num<<endl;
	cout<<"*ptr= "<<*ptr<<endl;
	cout<<"num= "<<num<<endl;
	// Now changing the value of the pointer target
	*ptr = 200;
	cout<<"after the line: *ptr = 200; "<<"\n\n";
	cout<<"ptr= "<<ptr<<endl;
	cout<<"&num= "<<&num<<endl;
	cout<<"*ptr= "<<*ptr<<endl;
	cout<<"num= "<<num<<endl;
	
	// Now changing the value of the pointer target in another way
	num = 70;
	cout<<"after the line: num = 70; "<<"\n\n";
	cout<<"ptr= "<<ptr<<endl;
	cout<<"&num= "<<&num<<endl;
	cout<<"*ptr= "<<*ptr<<endl;
	cout<<"num= "<<num<<endl;
	
	// Now changing the pointer target address
	int num2 = 80;
	ptr = &num2;
	cout<<"after the line: num = 70; "<<"\n\n";
	cout<<"ptr= "<<ptr<<endl;
	cout<<"&num= "<<&num<<endl;
	cout<<"*ptr= "<<*ptr<<endl;
	cout<<"num= "<<num<<endl;
	
	return 0;
}
