#include<iostream>
using namespace std;
void option(string a);
main()
{
	cout<<"Enter 'true' or 'false': ";
	string reverse;
	cin>> reverse;

	option(reverse);
}

void option(string a)
{
	if( a == "true")
{	cout<<"false";	}

	if( a == "false")
{	cout<<"true";	}
	}