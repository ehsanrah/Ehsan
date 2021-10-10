#include<iostream>
//#include<string>
#include<cstring>
using namespace std;
int sum(int a ,int b)
{
	int sum = a + b;
	return sum;
}
int main()
{
	
	//string name;
	char name[3];
	cout<<"Enter your name"<<"\n";
	
	//getline(cin, name);
	//cin.getline(name, 100,'\n');
	cin>>name;
	cout<<"welcome back "<<name;
	
	
	return 0;
}
