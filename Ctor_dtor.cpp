#include<iostream>
using namespace std;

class Animal
{
	private:
		string ani_name;
		string nickname;
		int age;
		bool isMale;
		
	public:
		//default ctor
		Animal()
		{
			cout<<"Default ctor is called"<<endl;
		}
		Animal(string t_name, string t_nickname, int t_age, bool t_isMale)
		{
			cout<<"Parametrized ctor is called"<<endl;
			ani_name=t_name;
			nickname=t_nickname;
			age=t_age;
			isMale=t_isMale;
		}
		void print()
		{
			cout<<"animal name is :"<<ani_name<<endl;
			cout<<"nickname is :"<<nickname<<endl;
			cout<<"age is :"<<age<<endl;
			cout<<"Gender(1/0) :"<<isMale<<endl;
		}
		Animal(Animal &obj)
		{
			cout<<"Copy ctor is called"<<endl;
			ani_name=obj.ani_name;
			nickname=obj.nickname;
			age=obj.age;
			isMale=obj.isMale;
		}
		
		~Animal()
		{
			cout<<"obj is destroyed"<<endl;
		}
};
	

int main()
{
	Animal a1("Fish","Nemo",4,0);; 
	a1.print();
	cout<<endl;
	Animal a2("Horse","Harry",12,1); 
	a2.print();
	
	Animal a3=a1; //copy ctor
	cout<<endl;
	a3.print();
	return 0;
}

/*
type of ctors:

Default ctors: do not get any argument

Parametrized ctor:like an ordinary function with input
argument:
ex for a class named Studnt:
Student(int age, String name)
{
	age1=age;
	name1=name;
}

Copy ctor: intializes an object using another object 
of the same class.
Student obj1;
Student obj2;

Student(Student &s)
{

}
*/

/*
-Dtor is a member function which destructs or deletes 
an object.
-Has the same name as class which preceds with a ~:
ex:
~Student()
-Dtor doesn't take any input and doesn't return 
anything(not even void)
-there could be only one Dtor in a class
*/


