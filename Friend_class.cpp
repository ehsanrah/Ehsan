#include<iostream>
using namespace std;
class BaseClass1{
	friend class BaseClass2; //BassClass2 is a friend of BassClass1
	private:
		int var;
	public:
		//parametrized constructor
		BaseClass1(int t_var)
		{
			var = t_var;
		}
};
class BaseClass2{
	public:
		void getData(BaseClass1 obj)
		{
			cout<<"The value if var is: "<<obj.var<<endl;
		}
};

int main()
{
	BaseClass1 obj1(20);
	BaseClass2 obj2;	
	obj2.getData(obj1);
	
	return 0;
}
