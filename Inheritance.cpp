#include<iostream>
using namespace std;
class Shape
{
	protected:  // private can't be inherited
		int width;
		int height;
	
	public:
		int setWidth(int t_width)
		{
			width =t_width;
		}
		int setHidth(int t_height)
		{
			height =t_height;
		}	
};
//derived Class
class Rectangle: public Shape
{
	public:
	int getArea()
	{
		return (width*height);
	}
};
int main()
{
	Rectangle rect;
	rect.setWidth(7);
	rect.setHidth(10);	
	
	
	cout<<"Area of the shape is: "<< rect.getArea()<<endl;
	return 0;
}

/*
-inheritance syntax
class derived class name:access specifier baseclass
-type of inheritance:
--single inheritance
--multilevel inheritance
--multiple inheritance
--heirarchical inheritance
--hybrid inheritance
--multipath inheritance
*/
