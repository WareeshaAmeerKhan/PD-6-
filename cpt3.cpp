#include<iostream>
using namespace std;

string findZodaicSign(int day, string month);

main()
{
	int day;
	string month;
	string output;

	cout<<"Enter the day of birth:  ";
	cin>>day;
	cout<<"Enter the month of birth (e.g; January,February,etc.): ";
	cin>>month;
	
	output=findZodaicSign(day, month);
	cout<<"Zodaic Sign: "<<output;
}

string findZodaicSign(int day, string month)
{
	string sign;

	if(month=="January")
	{
		if(day>=1 && day<=19)
		{
			sign="Capricorn";
		}
		else if(day>=20 && day<=31)
		{
			sign="Aquarius";
		}
	}
	if(month=="February")
	{
		if(day>=1 && day<=18)
		{
			sign="Aquarius";
		}
		else if(day>=19 && day<=29)
		{
			sign="Pisces";
		}
	}
	if(month=="March")
	{
		if(day>=1 && day<=20)
		{
			sign="Pisces";
		}
		else if(day>=21 && day<=31)
		{
			sign="Aries";
		}
	}
	if(month=="April")
	{
		if(day>=1 && day<=19)
		{
			sign="Aries";
		}
		else if(day>=20 && day<=30)
		{
			sign="Taurus";
		}
	}
	if(month=="May")
	{
		if(day>=1 && day<=20)
		{
			sign="Taurus";
		}
		else if(day>=21 && day<=31)
		{
			sign="Gemini";
		}
	}
	if(month=="June")
	{
		if(day>=1 && day<=20)
		{
			sign="Gemini";
		}
		else if(day>=21 && day<=30)
		{
			sign="Cancer";
		}
	}
	if(month=="July")
	{
		if(day>=1 && day<=22)
		{
			sign="Cancer";
		}
		else if(day>=23 && day<=31)
		{
			sign="Leo";
		}
	}
	if(month=="August")
	{
		if(day>=1 && day<=22)
		{
			sign="Leo";
		}
		else if(day>=23 && day<=31)
		{
			sign="Virgo";
		}
	}
	if(month=="September")
	{
		if(day>=1 && day<=22)
		{
			sign="Virgo";
		}
		else if(day>=23 && day<=30)
		{
			sign="Libra";
		}
	}
	if(month=="October")
	{
		if(day>=1 && day<=22)
		{
			sign="Libra";
		}
		else if(day>=23 && day<=31)
		{
			sign="Scorpio";
		}
	}
	if(month=="November")
	{
		if(day>=1 && day<=21)
		{
			sign="Scorpio";
		}
		else if(day>=22 && day<=30)
		{
			sign="Saggitarius";
		}
	}
	if(month=="December")
	{
		if(day>=1 && day<=21)
		{
			sign="Saggitarius";
		}
		else if(day>=22 && day<=31)
		{
			sign="Aquarius";
		}
	}
	

	return sign;
}