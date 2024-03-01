#include <iostream>
using namespace std;
int main()
{
	int axia, katigoria;
	float poso_dasmon;
	cout<<"Dose tin axia tou prointos: ";
	cin>>axia;
	cout<<"Dose tin katigoria (1-4): ";
	cin>>katigoria;
	switch (katigoria)
	{
		case 1: poso_dasmon=axia*0.10;
		break;
		
		case 2: poso_dasmon=axia*0.15;
		break;
		
		case 3: poso_dasmon=axia*0.20;
		break;
		
		case 4: poso_dasmon=axia*0.40;
		break;
	}
	
	cout<<"POSO DASMON: "<<poso_dasmon;
	return 0;
}
