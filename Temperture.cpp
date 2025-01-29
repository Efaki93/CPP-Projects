#include <iostream>
using namespace std;
float temp (float tempF);

int main()
{
	float F;
	cout<<"Enter Temperature in Fahremheit: ";
	cin>>F;
	cout<<"Temperature in Celcius: "<<temp(F);
	return 0;
}

float temp (float tempF)
{
	float C;
	C=(tempF-32)/1.8;
	return C;
}
