#include<iostream>
#include<iomanip>
using namespace std;

float celullarCompany(char service_code, char time, float minutes);

main()
{
	char service_code;
	char time;
	float minutes;
	float output;

	cout<<"Enter the service code (R/r for regular, P/p for premium): ";
	cin>>service_code;

	if(service_code=='p' || service_code=='P')
	{
		cout<<"Enter time of the call (D/d for day, N/n for night): ";
		cin>>time;
	}

	cout<<"Enter the number of minutes used: ";
	cin>>minutes;

	output=celullarCompany(service_code, time, minutes);
	cout<<"Amount Due: $"<<fixed<<setprecision(2)<<output;
}

float celullarCompany(char service_code, char time, float minutes)
{
	float amount;

	if(service_code=='R' || service_code=='r')
	{
		cout<<"Service type: Regular"<<endl;
		cout<<"Total minutes use: "<<minutes<<" minutes."<<endl;
		if(minutes<=50)
		{
			amount=10.00;
		}
		if(minutes>50)
		{
			amount=10.00+(0.20*(minutes-50));
		}
	}

	if((service_code=='P' || service_code=='p') && (time=='D' || time=='d'))
	{
		cout<<"Service type: Premium"<<endl;
		cout<<"Total minutes use: "<<minutes<<" minutes."<<endl;
		if(minutes<=75)
		{
			amount=25.00;
		}
		if(minutes>75)
		{
			amount=25.00+(0.10*(minutes-75));
		}
	}

	if((service_code=='P' || service_code=='p') && (time=='N' || time=='n'))
	{
		cout<<"Service type: Premium"<<endl;
		cout<<"Total minutes use: "<<minutes<<" minutes."<<endl;
		if(minutes<=100)
		{
			amount=25.00;
		}
		if(minutes>75)
		{
			amount=25.00+(0.05*(minutes-100));
		}
	}

	if(service_code!='P' && service_code!='p' && service_code!='R' && service_code!='r')
	{
		cout<<"Error! Enter valid input.";
	}

	return amount;

}