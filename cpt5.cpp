#include<iostream>
using namespace std;

float calculateFruitPrice(string day, string fruit, float quantity);

main()
{
	string day, fruit;
	float quantity;
	float output;
	
	cout<<"Enter the fruit name: ";
	cin>>fruit;
	cout<<"Enter the day of week(e.g., Monday,Sunday,etc): ";
	cin>>day;
	cout<<"Enter the quantity: ";
	cin>>quantity;

	output=calculateFruitPrice(day, fruit, quantity);
	cout<<output;
}
float calculateFruitPrice(string day, string fruit, float quantity)
{
	float price;
	
	if(fruit=="apple")
	{
		if(day=="sunday" || day=="Sunday" || day=="saturday" || day=="Saturday")
		{
			price=quantity*1.20;
		}
		else if(day=="monday" || day=="Monday" || day=="tuesday" || day=="Tuesday" || day=="wednesday" || day=="Wednesday" || day=="thursday" || day=="Thursday" || day=="friday" || day=="Friday")
		{
			price=quantity*1.25;
		}
	}

	else if(fruit=="banana")
	{
		if(day=="sunday" || day=="Sunday" || day=="saturday" || day=="Saturday")
		{
			price=quantity*2.50;
		}
		else if(day=="monday" || day=="Monday" || day=="tuesday" || day=="Tuesday" || day=="wednesday" || day=="Wednesday" || day=="thursday" || day=="Thursday" || day=="friday" || day=="Friday")
		{
			price=quantity*2.70;
		}
	}

	else if(fruit=="orange")
	{
		if(day=="sunday" || day=="Sunday" || day=="saturday" || day=="Saturday")
		{
			price=quantity*0.85;
		}
		else if(day=="monday" || day=="Monday" || day=="tuesday" || day=="Tuesday" || day=="wednesday" || day=="Wednesday" || day=="thursday" || day=="Thursday" || day=="friday" || day=="Friday")
		{
			price=quantity*0.90;
		}
	}

	else if(fruit=="grapefruit")
	{
		if(day=="sunday" || day=="Sunday" || day=="saturday" || day=="Saturday")
		{
			price=quantity*1.45;
		}
		else if(day=="monday" || day=="Monday" || day=="tuesday" || day=="Tuesday" || day=="wednesday" || day=="Wednesday" || day=="thursday" || day=="Thursday" || day=="friday" || day=="Friday")
		{
			price=quantity*1.60;
		}
	}

	else if(fruit=="kiwi")
	{
		if(day=="sunday" || day=="Sunday" || day=="saturday" || day=="Saturday")
		{
			price=quantity*2.70;
		}
		else if(day=="monday" || day=="Monday" || day=="tuesday" || day=="Tuesday" || day=="wednesday" || day=="Wednesday" || day=="thursday" || day=="Thursday" || day=="friday" || day=="Friday")
		{
			price=quantity*3.00;
		}
	}

	else if(fruit=="pineapple")
	{
		if(day=="sunday" || day=="Sunday" || day=="saturday" || day=="Saturday")
		{
			price=quantity*5.50;
		}
		else if(day=="monday" || day=="Monday" || day=="tuesday" || day=="Tuesday" || day=="wednesday" || day=="Wednesday" || day=="thursday" || day=="Thursday" || day=="friday" || day=="Friday")
		{
			price=quantity*5.60;
		}
	}

	else if(fruit=="grapes")
	{
		if(day=="sunday" || day=="Sunday" || day=="saturday" || day=="Saturday")
		{
			price=quantity*3.85;
		}
		if(day=="monday" || day=="Monday" || day=="tuesday" || day=="Tuesday" || day=="wednesday" || day=="Wednesday" || day=="thursday" || day=="Thursday" || day=="friday" || day=="Friday")
		{
			price=quantity*4.20;
		}
	}

	return price;

	if(day!="monday" && day!="Monday" && day!="tuesday" && day!="Tuesday" && day!="wednesday" && day!="Wednesday" && day!="thursday" && day!="Thursday" && day!="friday" && day!="Friday" && day!="saturday" && day!="Saturday" && day!="sunday" && day!="Sunday") 
	{
		if(fruit!="apple" && fruit!="banana" && fruit!="orange" && fruit!="grapes" && fruit!="pineapple" && fruit!="kiwi" && fruit!="grapefruit")
		{
			cout<<"error";
		}
	}
	
}