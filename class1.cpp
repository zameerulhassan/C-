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
		int day;
		int month;
};

int main()
{
	DayOfYear birthday, toDay;
	birthday.inPut();
	toDay.inPut();
	if (birthday.month==toDay.month && birthday.day==toDay.day)
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
}
