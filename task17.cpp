#include<iostream>
using namespace std;

void result(int people, int tp);

main()
{
	cout<<"Number of people in the household: ";
	int people;
	cin>>people;

	cout<<"Number of rolls of TP: ";
	int tp;
	cin>>tp;

	result(people, tp);
}

void result(int people, int tp)
{
	int sheet = tp*500;
	int usageperday = 57* people;
	int totalusage = usageperday * 14;
	int available = sheet/usageperday;

if(sheet>totalusage)
{
	cout<<"Your TP will last "<<available<<" days, no need to panic!";
}
if(sheet<totalusage)
{
	cout<<"Your TP will only last "<<available<<" days, buy more!";
}
}