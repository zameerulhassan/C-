#include <iostream>

#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>
#include<string.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class DayOfYear
{
	public:	
		void inPut();
		void outPut();
		void setDate(int newMonth, int newDate);
		int getDate();
		int getMonth();
	private:
		int checkDate();	
		int day;
		int month;
};

int main()
{
	DayOfYear birthday, toDay;
	birthday.inPut();
	cout<<"Your birthday is on: ";
	birthday.outPut();
	toDay.inPut();
	cout<<"Todays date is on: ";
	toDay.outPut();
	cout<<"You assgined new value to today's date"<<endl;
	toDay.setDate(12, 3);
	
	if (birthday.getMonth() == toDay.getMonth() && birthday.getDate()==toDay.getDate())
	{
		cout<<"Happy Birthday"<<endl;
	}
	else
	cout<<"Happy UNbirthday"<<endl;
	return 0;
}
void DayOfYear::outPut()
{
	cout<<"The Month is "<<month<<endl;
	cout<<"The day is "<<day<<endl;
}
void DayOfYear:: inPut()
{
	cout<<"Please Enter Month as Number "<<endl;
	cin >>month;
	cout<<"Please Enter day as Number "<<endl;
	cin >>day;
	checkDate();
}
void DayOfYear:: setDate(int newMonth, int newDate)
{
	month = newMonth;
	day = newDate;
	checkDate();
}
int DayOfYear:: checkDate()
{
	if ((month > 12 || month < 1) && (day > 31 || day < 1))
	{
		cout<<"Illegal date format";
		exit(1);
	}
}
int DayOfYear::getDate()
{
	return day;
}
int DayOfYear::getMonth()
{
	return month;
}
