#include<iostream>
using namespace std;

void finalprice(string name, float price);

main()
{	string name;
	float price;
	cout<<"Enter the country's name: ";
	cin>>name;

	cout<<"Enter the ticket price in dollars: $";
	cin>>price;

	finalprice(name, price);
}

void finalprice(string a, float b)
{
if(a == "Pakistan")
	{ b=b-(b*0.05);
	  cout<<"Final ticket price after discount: $"<<b;}

if(a == "Ireland")
	{  b=b-(b*0.1);
	  cout<<"Final ticket price after discount: $"<<b;}


if(a == "India")
	{  b=b-(b*0.2);
	  cout<<"Final ticket price after discount: $"<<b;}


if(a == "England")
	{  b=b-(b*0.3);
	  cout<<"Final ticket price after discount: $"<<b;}


if(a == "Canada")
	{  b=b-(b*0.45);
	  cout<<"Final ticket price after discount: $"<<b;}
}