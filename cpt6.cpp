#include<iostream>
#include<string.h>

using namespace std;

string calculateHotalPrice(string month, int numberOFdays);

main()
{
	string month;
	int numberOFdays;
	string output;
	
	cout<<"Enter the month(may/june/july/august/september/october): ";
	cin>>month;
	cout<<"Enter the number of stays: ";
	cin>>numberOFdays;

	output=calculateHotalPrice(month, numberOFdays);
	cout<<output;
}

string calculateHotalPrice(string month, int numberOFdays)
{
	string result;
	float studio,apartment;
	float studio_after_discount, apartment_after_discount;
	
	if(month=="May" || month=="may" || month=="October" || month=="october")
	{
		studio=50*numberOFdays;
		apartment=65*numberOFdays;
		if(numberOFdays>7 && numberOFdays<=14)
		{
			studio_after_discount=studio-(0.05*studio);
			apartment_after_discount=apartment;
		}
		else if(numberOFdays>14)
		{
			studio_after_discount=studio-(0.30*studio);
			apartment_after_discount=apartment-(0.10*apartment);
		}
		else
		{
			studio_after_discount=studio;
			apartment_after_discount=apartment;
		}
	}

	if(month=="September" || month=="september" || month=="June" || month=="june")
	{
		studio=75.30*numberOFdays;
		apartment=68.70*numberOFdays;
		if(numberOFdays>14)
		{
			studio_after_discount=studio-(0.20*studio);
			apartment_after_discount=apartment-(0.10*apartment);
		}

		else
		{
			studio_after_discount=studio;
			apartment_after_discount=apartment;
		}
	}

	if(month=="July" || month=="july" || month=="August" || month=="august")
	{
		studio=76*numberOFdays;
		apartment=77*numberOFdays;
		if(numberOFdays>14)
		{
			studio_after_discount=studio;
			apartment_after_discount=apartment-(0.10*apartment);
		}

		else
		{
			studio_after_discount=studio;
			apartment_after_discount=apartment;
		}
	}

	result="Apartment: $"+to_string(apartment_after_discount)+"\nStudio: $"+to_string(studio_after_discount);
	return result;
	
}