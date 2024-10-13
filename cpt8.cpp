#include<iostream>
#include<cmath>

using namespace std;

int calculateVolleyballGames(string year_type, int holidays, int hometown_weekends);

main()
{
	int output;
	string year_type;
	int holidays, hometown_weekends;

	cout<<"Enter year type: ";
	cin>>year_type;
	cout<<"Enter the number of holidays: ";
	cin>>holidays;
	cout<<"Enter the number of weekends: ";
	cin>>hometown_weekends;
	
	output=calculateVolleyballGames(year_type, holidays, hometown_weekends);
	cout<<output;	
}

int calculateVolleyballGames(string year_type, int holidays, int hometown_weekends)
{
	float f_holidays, f_hometown_weekends, playable_weekends, total_playable_weekends, playable_holidays, total_playable_days, final_playable_days;
	int result;

	f_holidays=holidays;
	f_hometown_weekends=hometown_weekends;
	playable_weekends=(48-f_hometown_weekends)*3/4;
	total_playable_weekends=playable_weekends+f_hometown_weekends;
	playable_holidays=f_holidays*2/3;
	total_playable_days=playable_holidays+total_playable_weekends;

	if(year_type=="leap" || year_type=="Leap")
	{
		final_playable_days=floor(total_playable_days+(total_playable_days*0.15));
		result=final_playable_days;
	}

	else
	{
		final_playable_days=floor(total_playable_days);
		result=final_playable_days;
	}

	return result;
}