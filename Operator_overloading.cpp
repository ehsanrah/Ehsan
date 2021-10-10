#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int imag;
	public:
		//default ctor
		complex()
		{
			real=0;
			imag=0;
		}
		//parametrized ctor
		complex(int t_real, int t_imag)
		{
			real=t_real;
			imag=t_imag;
		}
		void display()
		{
			cout<<real<<" + "<<imag<<"i"<<endl;
		}
		//operator overloading
		complex operator +(complex c)
		{
			complex temp;
			temp.real = real + c.real;
			temp.imag = imag + c.imag;
			return temp;
		}
};
int main()
{
	complex obj1(7 , 3);
	complex obj2(2 , 5);
	complex obj3;
	obj3 = obj1 + obj2;
	obj3.display();
	

	return 0;
}
