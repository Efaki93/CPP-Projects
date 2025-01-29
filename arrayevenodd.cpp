#include <iostream>
using namespace std;
int main()
{
	int i, num, even=0, odd=0;
	cout<<"Enter size of arrary: ";
	cin>>num;
	
	int arr[num];
	cout<<"Enter "<<num<<" elements in array: "<<endl;
	for (i=0; i<num; i++)
	{
		cout<<"Give the "<<i+1<<" element: ";
		cin>>arr[i];
	}
	
	for (i=0; i<num; i++)
	{
		if (arr[i]%2==0)
		{
			even++;
		}
	}
	
	for (i=0; i<num; i++)
	{
		if (arr[i]%2!=0)
		{
			odd++;
		}
	}
	cout<<"Total even numbers: "<<even<<endl;
	cout<<"Total odd numbers: "<<odd;
	return 0;
}
