#include<iostream>
using namespace std;
//base class
class Voice
{
	public:
		void Msg()
		{
			cout<<"Hey There."<<endl;
		}
};

//derived class
class Siri:public Voice
{
	public:
		void Msg()
		{
			//cout<<"Hey Siri!"<<endl;
			Voice::Msg();
		}
};

//derived class II
class Cortana:public Voice
{
	public:
		void Msg()
		{
			cout<<"Hey Cortana!"<<endl;
		}
};

//derived class III
class Alexa:public Voice
{
	public:
		void Msg()
		{
			cout<<"Hey Alexa!"<<endl;
		}
};
int main()
{
	
	Voice v1;
	v1.Msg();
	
	Siri s1;
	s1.Msg();
	
	Cortana c1;
	c1.Msg();
	
	Alexa a1;
	a1.Msg();
	
	return 0;
}

