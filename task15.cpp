#include<iostream>
using namespace std;

void flowershop(float redRose, float whiteRose, float tulip);

main()
{
	cout<<"Red Rose: ";
	float RR;
	cin>>RR;

	cout<<"White Rose: ";
	float WR;
	cin>>WR;

	cout<<"Tulips: ";
	float T;
	cin>>T;

	flowershop(RR, WR, T);
}
void flowershop(float redRose, float whiteRose, float tulip)
{
	float originalPrice;
	originalPrice=(redRose*2.00)+(whiteRose*4.10)+(tulip*2.50);
	cout<<"Original Price: $"<<originalPrice<<endl;

	if(originalPrice > 200)
	{	float discount;
		discount = originalPrice-(originalPrice*0.2);
		cout<<"Price after Discount: $"<<discount;	}

	else
		cout<<"No discount applied.";
}