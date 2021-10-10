#include<iostream>
#include<ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	int user = 0;
	int cpu = 0;
	
	cout<<"1)Rock"<<endl;
	cout<<"2)Paper"<<endl;
	cout<<"3)Scisor"<<endl;
	cout<<"Rock Paper Scisor Shoot! :"<<endl;
	cin>>user;
	
	if(user == 1)
	{
		cout<<"you chose Rock"<<endl;
	}
	else if(user == 2)
	{
		cout<<"you chose Paper"<<endl;
	}	
	else if(user == 3)
	{
		cout<<"you chose Scisor"<<endl;
	}
	cpu = rand()%3 + 1;
	if(cpu == 1)
	{
		cout<<"cpu chose Rock"<<endl;
	}
	else if(cpu == 2)
	{
		cout<<"cpu chose Paper"<<endl;
	}	
	else if(cpu == 3)
	{
		cout<<"cpu chose Scisor"<<endl;
	}
	//match
	if(user==cpu)
	{
		cout<<"It's a tie"<<endl;
	}
	//user chooses Rock
	else if(user==1)
		{
			if(cpu==2)
			{
				cout<<"you lost"<<endl;
			}
			else
			{
				cout<<"you won"<<endl;
			}
		}
	//user chooses paper
	else if(user==2)
		{
			if(cpu==1)
			{
				cout<<"you won"<<endl;
			}
			else
			{
				cout<<"you lost"<<endl;
			}
		}
	//user chooses scisor
	else if(user==3)
		{
			if(cpu==1)
			{
				cout<<"you lost"<<endl;
			}
			else
			{
				cout<<"you won"<<endl;
			}
		}		
	return 0;
}
