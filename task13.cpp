#include<iostream>
using namespace std;

void possibleBonus(int a, int b);

main()
{	cout<<"Enter your position: ";
	int p1;
	cin>>p1;

	cout<<"Enter your friend's position: ";
	int p2;
	cin>>p2;

	possibleBonus(p1, p2);
}

void possibleBonus(int a, int b)
{
	if(b-a<=6 )
	{	cout<<"true";	}
	if(b-a>6)
	{	cout<<"false";	}	
}