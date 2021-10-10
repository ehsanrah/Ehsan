#include<iostream>
using namespace std;
class pokeman
{
	string name;
	
	public :
		void printAddressofClass()
		{
			cout<<this<<endl;
		}
		void setName(string name)
		{
			this->name=name;
		}
		void printName()
		{
			cout<<name<<endl;
		}
};
int main()
{
	pokeman p1;
	cout<<&p1<<endl;
	p1.printAddressofClass();
	pokeman p2;
	p2.printAddressofClass();
	p2.setName("Ehsan");
	p2.printName(); 
	return 0;
}
