#include<iostream>
using namespace std;

float calculateAverage(float marks_English,float marks_Maths,float marks_Chemistry,float marks_SocialSciences,float marks_Biology);
string calculateGrade(float average);

main()
{
	string name;
	float marks_English, marks_Maths, marks_Chemistry, marks_SocialSciences, marks_Biology;
	float average;
	string grade;

	cout<<"Enter student name:               ";
	cin>>name;

	cout<<"Enter marks for English:          ";
	cin>>marks_English;
	cout<<"Enter marks for Maths:            ";
	cin>>marks_Maths;
	cout<<"Enter marks for Chemistry:        ";
	cin>>marks_Chemistry;
	cout<<"Enter marks for Social Sciences:  ";
	cin>>marks_SocialSciences;
	cout<<"Enter marks for Biology:          ";
	cin>>marks_Biology;
	cout<<endl;

	average=calculateAverage(marks_English,marks_Maths,marks_Chemistry,marks_SocialSciences,marks_Biology);
	grade=calculateGrade(average);

	cout<<"Student name: "<<name<<endl;
	cout<<"Percentage:   "<<average<<"%"<<endl;
	cout<<"Grade:        "<<grade<<endl;
}

float calculateAverage(float marks_English,float marks_Maths,float marks_Chemistry,float marks_SocialScience,float marks_Biology)
{
	float avg;
	avg=(marks_English+marks_Maths+marks_Chemistry+marks_SocialScience+marks_Biology)/5;
	return avg;
}

string calculateGrade(float average)
{
	string GRADE;

	if(average>=90 && average<=100)
	{
		GRADE="A+";
	}
	if(average>=80 && average<90)
	{
		GRADE="A";
	}
	if(average>=70 && average<80)
	{
		GRADE="B+";
	}
	if(average>=60 && average<70)
	{
		GRADE="B";
	}
	if(average>=50 && average<60)
	{
		GRADE="C";
	}
	if(average>=40 && average<50)
	{
		GRADE="D";
	}
	if(average<40)
	{
		GRADE="F";
	}

	return GRADE;
}