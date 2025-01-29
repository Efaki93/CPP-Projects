#include <iostream>
using namespace std;

int main()
{
	int amount, d50, d10, d5;
	
	cout << "Give the amount: ";
	cin >> amount;
	
	cout << "The amount of " << amount << " euro be splited to: "<< endl;
	
	d50=amount/50;
	d10=amount%50/10;
	d5=amount%10/5;
	
	cout << d50<< " of 50 euros" << endl;
	cout << d10<< " of 10 euros" << endl;
	cout << d5<< " of 5 euros";
	
	return 0;
}
