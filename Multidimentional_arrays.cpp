#include<iostream>
using namespace std;
int main()
{
	int pfMarks[3][2];
	cout<<"Enter values in the 2D array one by one"<<endl;
	for(int i = 0; i<3; i++)
	{
		for(int j =0; j<2; j++)
		{
			cin>>pfMarks[i][j];
		}
	}
	cout<<"\n";
	cout<<"row-major order"<<endl;
	for(int i = 0; i<3; i++)
	{
		for(int j =0; j<2; j++)
		{
			cout<<pfMarks[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"col-major order"<<endl;
	for(int j = 0; j<2; j++)
	{
		for(int i =0; i<3; i++)
		{
			cout<<pfMarks[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
