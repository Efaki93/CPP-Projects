#include <iostream>
using namespace std;

int main()
{
	int katigoria, plithos, ker50, ker20, ker10, coins;
	float kostos;
	
	cout<<"Dwse tin epilogi katigorias"<<endl;
	cout<<"1. Foititiko"<<endl;
	cout<<"2. Poluteknon"<<endl;
	cout<<"3. Kanoniko"<<endl;
	
	cout<<"Give your choice: ";
	cin>>katigoria;
	
	switch (katigoria)
	{
		case 1:
			cout<<"Epelekses Eisitirio Foititiko"<<endl;
			cout<<"Dose ton arithmo twn eisitirion: ";
			cin>>plithos;
			kostos=plithos*0.5;
		break;
			
		case 2:
			cout<<"Epelekses Eisitirio Poluteknon"<<endl;
			cout<<"Dose ton arithmo twn eisitirion: ";
			cin>>plithos;
			kostos=plithos*0.4;
		break;
			
		case 3:
			cout<<"Epelekses Eisitirio Kanoniko"<<endl;
			cout<<"Dose ton arithmo twn eisitirion: ";
			cin>>plithos;
			kostos=plithos*0.7;
		break;
			
		default: cout<<"Lathos epilogi"<<endl;
	}
	
	cout<<"Synoliko kostos: "<<kostos<<" euro"<<endl;
	
	coins=kostos*100;
	ker50=coins/50;
	coins=coins%50;
	ker20=coins/20;
	coins=coins%20;
	ker10=coins/10;
	
	cout<<"Xreiazontai "<<ker50<<" kermata ton 50 lepton"<<endl;
	cout<<"Xreiazontai "<<ker20<<" kermata ton 20 lepton"<<endl;
	cout<<"Xreiazontai "<<ker10<<" kermata ton 10 lepton";
	
	return 0;
}
