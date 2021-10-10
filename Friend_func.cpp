#include<iostream>
using namespace std;
class Distance
{
	private:
		int meter;
	public:
		Distance() //constructors
		{
			meter = 0;
		}
		
		void displayMeter()
		{
			cout<<"Meter is "<<meter<<endl;
		}
		friend void sumUpp(Distance &d);
};

void sumUpp(Distance &d)
{
	d.meter = d.meter + 10;
}

int main()
{
	Distance d1;
	d1.displayMeter();
	sumUpp(d1);
	d1.displayMeter();
	
	return 0;
}
