#include<iostream>
using namespace std;
inline int triple(int num)// reduce overhead of control transfer 
{
	return(num*3);
}
int main()
{
	cout<<triple(3)<<endl;
	cout<<triple(4)<<endl;
	cout<<triple(7)<<endl;
	
	return 0;
}
