#include<iostream>
using namespace std;
struct Person
{
	string name;
	int age;
	bool isMale;
};
int main()
{
	Person p1;
	p1.name ="Billy";
	p1.age = 20;
	p1.isMale = true;
	
	cout<<p1.name<<endl;
	cout<<p1.age<<endl;
	cout<<p1.isMale<<endl;
	
	Person p2;
	p2.name ="Jesse";
	p2.age = 18;
	p2.isMale = 0;	
	
	cout<<p2.name<<endl;
	cout<<p2.age<<endl;
	cout<<p2.isMale<<endl;
	return 0;
}

