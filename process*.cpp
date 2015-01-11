#include<iostream>
using namespace std;
int main()
{
	int i,j;
	i=1;
	while(i<=6)
	{
	for(j=1;j<=6-i+1;j++)
		cout<<" ";
	for(j=1;j<=2*i-1;j++)
		cout<<"*";
	cout<<endl;
	++i;
	}
	cin.get();
	return 0;
}
