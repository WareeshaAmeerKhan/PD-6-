#include<iostream>
using namespace std;

string CheckPointPosition(int h, int x, int y);

main()
{
	int h;
	int x,y;
	string output;

	cout<<"Enter height: ";
	cin>>h;
	cout<<"Enter x coordinate: ";
	cin>>x;
	cout<<"Enter y coordinate: ";
	cin>>y;

	output=CheckPointPosition(h, x, y);
	cout<<output;
}

string CheckPointPosition(int h, int x, int y)
{
	string result;
	
	if( (x>0 && x<(3*h) && y>0 && y<h) || (x>h && x<(2*h) && y<=(4*h)) )
	{
		result="Inside";
	}

	else if( (y==0 && x<=(3*h)) || (y==h && x<=(3*h)) || (x==0 && y<=h) || (x==h && y<=(4*h)) || (x==(2*h) && y<=(4*h)) || (x==(3*h) && y<=h) )
	{
		result="Border";
	}
	
	else
	{
		result="Outside";
	}

	return result;
}
