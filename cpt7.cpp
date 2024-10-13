#include<iostream>
#include<iomanip>
using namespace std;

string checkStudentStatus(int startHour, int startMinute, int arrivalHour, int arrivalMinute);

main()
{
	int startHour, startMinute, arrivalHour, arrivalMinute;
	string output;

	cout<<"Enter Exam Starting Time(hour 0 to 23): ";
	cin>>startHour;
	cout<<"Enter Exam Starting Time(minutes 0 to 59): ";
	cin>>startMinute;
	cout<<"Enter Student's time of arrival(hour 0 to 23):";
	cin>>arrivalHour;
	cout<<"Enter Student's time of arrival(minutes 0 to 59): ";
	cin>>arrivalMinute;

	output=checkStudentStatus(startHour, startMinute, arrivalHour, arrivalMinute);
	cout<<output;
}

string checkStudentStatus(int startHour, int startMinute, int arrivalHour, int arrivalMinute)
{
	string result;
	int hours, minutes;
	int startTime, arrivalTime;
	int time_difference;
	
	startTime=startMinute+(startHour*60);
	arrivalTime=arrivalMinute+(arrivalHour*60);
	time_difference=arrivalTime-startTime;
	
	if(time_difference<=-60)
	{
		hours=((-1)*(time_difference))/60;
		minutes=((-1*time_difference))%60;
		result="Early \n"+to_string(hours)+":"+to_string(minutes)+" hours before start.";
	}
	
	else if(time_difference<-30 && time_difference>-60)
	{
		minutes=(-1)*(time_difference);
		result="Early \n"+to_string(minutes)+" minutes before start.";
	}

	else if(time_difference>=60)
	{
		hours=(time_difference)/60;
		minutes=(time_difference)%60;
		result="Late \n"+to_string(hours)+":"+to_string(minutes)+" hours after start.";
	}

	else if(time_difference>0 && time_difference<60)
	{
		minutes=time_difference;
		result="Late \n"+to_string(minutes)+" minutes after start.";
	}

	else if(time_difference<=-1 && time_difference>=-30)
	{
		minutes=(-1)*(time_difference);
		result="On Time. \n"+to_string(minutes)+" minutes before start.";
	}

	else if(time_difference==0)
	{
		result="On Time.";
	}

	return result;
}