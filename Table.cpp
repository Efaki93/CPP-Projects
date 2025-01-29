#include <iostream>
using namespace std;

int main()
{
	int number, i, total;
	
	cout<<"Enter number to print table: ";
	cin>>number;
	
	for (i = 1; i <= 10; i++)
	{
		total = number * i;
		cout<<number<<" x "<<i<<" = "<<total<<endl;
	}
	return 0;
}
