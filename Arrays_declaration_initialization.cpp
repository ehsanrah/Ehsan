#include<iostream>
using namespace std;

int main()
{
	//declaration and initialization should be 
	//in the same line for arrays or with for loops
	
	//unlike vectors arrays are static and their size is fixed upon declaration.
	//char Grade[4] = {'C', 'D', 'A', 'B'};
	char Grade[4];
	for (int i = 0; i < 4; i++)
	{
		cin>>Grade[i];
	}
	cout<<endl;
	for (int i = 0; i<4; i++)
	{
		cout << Grade[i] << endl;
	}
	 
	return 0;
}
