#include<iostream>
using namespace std;

class BaseClass{
	private:
		int abc;
		static int count;
	public:
		
		//default ctor
		BaseClass()
		{
			count++;
		}
		static int getCount()
		{
			return count;
		}
};
int BaseClass::count=0;
int main()
{
	cout<<"Initial count: "<<BaseClass::getCount()<<endl;
	BaseClass obj1,obj2;

	cout<<"count= "<<BaseClass::getCount()<<endl;
	
	return 0;
}
