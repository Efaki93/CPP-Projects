/* Programma klimakotis xreosis enos venzinadikou */

#include <iostream>
using namespace std;
int main()
{
	int litra;
	float s_kostos;
	cout<<"Doste ton arithmo ton litron: ";
	cin>>litra;
	if (litra<=40)
	{
		s_kostos=litra*1.64;
	}
	else if(litra<=100)
	{
		s_kostos=65.6+(litra-40)*1.51;
	}
	else if (litra<=180)
	{
		s_kostos=156.2+(litra-100)*1.38;
	}
	else
	{
		s_kostos=266.6+(litra-180)*1.08;
	}
	cout<<"To sunoliko kostos einai: "<<s_kostos<<" euro";
	return 0;
}
