#include <iostream>
using namespace std;
int main()
{
	int ar1, ar2, gin, sum;
	cout<<"Dose 2 akeraiou arithmous: ";
	cin>>ar1>>ar2;
	if (ar1>0 && ar2>0 || ar1<0 && ar2<0)
	{
		sum=ar1+ar2;
		cout<<"Einai omosumoi kai to athroisma tous einai: "<<sum;
	}
	else
	{
		gin=ar1*ar2;
		cout<<"Einai eterosumoi kai to ginomeno tous einai: "<<gin;
	}
	return 0;
}
