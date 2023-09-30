#include<iostream>
using namespace std;

void pet(int holidays);

main()
{
	cout<<"Holidays: ";
	int holidays;
	cin>>holidays;

	pet(holidays);
}

void pet(int holidays)
{
	int workingDay;
	workingDay = 365 - holidays;

	int timeForGame;
	timeForGame = (workingDay*63)+(holidays*127);

if(timeForGame < 30000)
{

	int diffFromNorm;
	diffFromNorm = 30000 - timeForGame;

	int hr;
	hr = (diffFromNorm / 60);

	int min;
	min = diffFromNorm % 60;

	
	  cout<<"Tom sleeps well"<<endl;
	  cout<<hr<<" hours and "<<min<<" minutes less for play";
}


if(timeForGame > 30000)
{

	int diffFromNorm;
	diffFromNorm =timeForGame - 30000;

	int hr;
	hr = (diffFromNorm / 60);

	int min;
	min = diffFromNorm % 60;
	
		cout<<"Tom will run away"<<endl;
	  cout<<hr<<" hours and "<<min<<" minutes for play";
}
}