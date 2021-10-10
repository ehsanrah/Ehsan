#include<iostream>
using namespace std;
//base class (abstract class)
class Pokeman{
	public:
		virtual void attack() = 0; //pure virtual function
};

//derived class
class Infernape: public Pokeman
{
	public:
		void attack() // it can't have input 
		{// if the content of this class is commented, then the infernape class is also abstract
			cout<<"What is the attack for Infernape"<<endl;
			string attack;
			getline(cin,attack);
			cout<<"infernape,"<<"use "<<attack<<"!"<<endl;	
		}
};

//derived class
class Lucario: public Pokeman
{
	public:
		void attack()  
		{
		cout<<"What is the attack for Lucario"<<endl;
			string attack;
			getline(cin,attack);
			cout<<"Lucario,"<<"use "<<attack<<"!"<<endl;	
		}
};
int main()
{
	Infernape i1;
	i1.attack();
	Lucario l1;
	l1.attack();
	return 0;
}
