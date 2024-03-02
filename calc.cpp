#include <iostream>
using namespace std;

void printMenu();
int add (int num1, int num2);
int sub (int num1, int num2);
int mult (int num1, int num2);
float div (float num1, float num2);

int main()
{
	int choice, num1, num2;
	
	printMenu();
	cin>>choice;
	
	while (choice<1 || choice>4) //Δομή επανάληψης, σε περίπτωση που ο χρήστης δώσει λάθος επιλογή.
	{
		cout<<"\nWrong choice!"<<endl;
		cout<<"Enter your choice again (1-4): ";
		cin>>choice;
	}
	
	cout<<"\nGive the 1st number: ";
	cin>>num1;
	cout<<"Give the 2nd number: ";
	cin>>num2;
		
	switch (choice)
	{
		case 1: cout<<"The sum is: "<<add(num1, num2);
		break;
	
		case 2: cout<<"The difference is: "<<sub(num1, num2);
		break;
		
		case 3: cout<<"The product is: "<<mult(num1, num2);
		break;
		
		case 4: if (num2!=0) //Έλεγχος αν ο διαιρέτης δεν είναι μηδέν.
				{ 
					cout<<"The quotient is: "<<div(num1, num2);
				}
				else
				{
					cout<<"Division with zero!";
				}
		break;
	}
	
	return 0;
}

void printMenu() //Εκτύπωση του μενού
{
	cout<<"\t---------------------------------"<<endl;
	cout<<"\t\t    Calculator"<<endl;
	cout<<"\t---------------------------------"<<endl;
	cout<<"\t*********************************"<<endl;
	cout<<"\t***";
	cout<<" \t1. Addition           ***"<<endl;
	cout<<"\t***";
	cout<<" \t2. Subtraction        ***"<<endl;
	cout<<"\t***";
	cout<<" \t3. Multiplication     ***"<<endl;
	cout<<"\t***";
	cout<<" \t4. Division           ***"<<endl;
	cout<<"\t*********************************"<<endl;
	cout<<"\nGive your choice (1-4): ";
}

int add (int num1, int num2) //Μέθοδος για την πρόσθεση
{
	return num1+num2;
}

int sub (int num1, int num2) //Μέθοδος για την αφαίρεση
{
	return num1-num2;
}

int mult (int num1, int num2) //Μέθοδος για τον πολλαπλασιασμό
{
	return num1*num2;
}

float div (float num1, float num2) //Μέθοδος για τη διαίρεση
{
	return num1/num2;
}
