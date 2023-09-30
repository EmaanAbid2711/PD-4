#include<iostream>
using namespace std;

void longestDuration(int h, int m);

main()
{
	cout<<"Enter the number of hours: ";
	int hour;
	cin>> hour;

	cout<<"Enter the number of minutes: ";
	int min;
	cin>> min;

	longestDuration(hour, min);
}

void longestDuration(int h, int m)
{
	int hr;
	hr=h*60;

	if(hr>m)
	{	cout<<h;	}
	else
		cout<<m;
}