#include<iostream>
using namespace std;
//abstract class
class MyBase{
	public:
		void show()
		{
			cout<<"Base class show function called"<<endl;
		}
		virtual void print()
		{
			cout<<"Base class print function called"<<endl;
		}
};

class MyDerived: public MyBase{
	void show()
	{
		cout << "Derived class show function called"<<endl;
	}
	void print()
	{
		cout<<"Derived class print function called"<<endl;
	}
};
int main()
{
	MyBase* baseptr;// we can not instantiate an abstract class
	
	MyDerived derivedObj; // derived class obj is created
	
	baseptr = &derivedObj;
	
	//run time polymorphism
	baseptr->print();//Derived class print function called
	baseptr->show();//Base class show function called
	
	return 0;
}
