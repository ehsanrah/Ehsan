#include<iostream>
#include<vector>
#include<cstdlib>
#include<fstream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int num = 0;
	int heads = 0;
	int tails = 0;
	char op;
	cout<<"Do you want to store the data(y/n)?"<<endl;
	cin>>op;
	ofstream ofile;
	if(op=='y'||op=='Y')
	{
		string filename;
		cout<<"enter filename:"<<endl;
		cin>>filename;
		ofile.open(filename.c_str());
	}
	cout<<"How many time do you want to flip the coin?" <<endl;
	
	cin>>num;
	cout<<"0 as tail"<<endl;
	cout<<"1 as head"<<endl;
	//int arr[10]; //static
	
	vector<int> total(num); //dynamic
	
	for (int i =0; i<total.size(); i++)
	{
		total[i] = rand()%2;
		if(total[i]==0)
		{
			if (op=='y' || op=='Y')
			{
			ofile<<"tails"<<total[i]<<" ";
			}
			tails++;
		}
		else
		{
			if (op=='y' || op=='Y')
			{
			ofile<<"heads"<<total[i]<<" ";
			}
			heads++;
		}
	}
	cout<<"Total: "<<total.size()<<endl;
	cout<<"tails: "<<tails<<endl;
	cout<<"Total: "<<heads<<endl;
	ofile.close();
	return 0;
}
