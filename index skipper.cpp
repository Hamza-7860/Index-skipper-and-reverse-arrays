#include<iostream>
using namespace std;
int main ()
{
	int var[10],sum=0;
	cout<<"Enter the ten numbers"<<endl;
	for(int n=0;n<10;n++)
	{
	cin>>var[n];
	}
	for(int n=0;n<=10;n++)
	{
	if(var[3]==n||var[5]==n)
	continue;
	sum=sum+n;
	}
	cout<<"sum of an array :"<<sum<<endl;
	return 0;
}

