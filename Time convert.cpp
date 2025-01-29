#include <iostream>
using namespace std;

int dose1 ()
{
	int a;
	cout<<"Give the time: ";
	cin>>a;
	return a;
}

void sectomin (int x, int &a, int &b)
{
	a = x / 60; //Minutes
	b = x % 60; //Seconds
}

int main()
{
	int k, l, m;
	k = dose1();
	sectomin(k,l,m);
	cout<<"The time is "<<l<<" minute(s) and "<<m<<" second(s)";
	return 0;
}
