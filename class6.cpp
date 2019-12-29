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
class groceryCounter
{
	public:	
		int inPut();
		void getOutPut();
		//void set(int newMonth, int newDate);
		int getCount();
	private:
		//bool checkInput();
		int cents =0;
		int dollars =0;
		int tcents =0;
		int tcents2 =0;
		int tdollars =0;
		int num;
		char c;
		int total;
		int overflow;
		int add1=0;
		int add2=0;
		int add3 =0;
		
};

int main()
{
	groceryCounter redCounter;
	
	redCounter.inPut();
	//cout<<"your coins type: ";

	//cout<<"total money is : ";
	//redCounter.outPut();
	
	return 0;
}
void groceryCounter::getOutPut()
{
	
	cout<<"Total money in the counter "<<endl;
	cout<<"***************** "<<endl;
	cout<<"\t"<<tdollars<<dollars<<":"<<tcents<<cents<<endl;
 	cout<<"***************** "<<endl;
}
int groceryCounter :: inPut()
{
	groceryCounter::getOutPut();
	cout<<"Please Enter type of coin "<<endl;
	cin >>c;
	cout<<"Please number of coins "<<endl;
	cin >>num;
	//checkInput();
	if ((c =='a')|| (c == 'A'))
	{
	//	if (num > 9)
	//	{
	//		cents = num % 10;
	//		add1 =  (num / 10);
	//	}
	//	else 
		cents = num; // cents
		
	}
	else if ((c =='s')|| (c == 'S')) // dimes
	{
		if ((num * 10) > 99)
		{
			tcents = add1 + (num / 10);
			//add2 = num / 10;
			cents = (num * 10) % 10; // remainder will be value of cents.
		}
		else 
		cents = num;
			
	}
	else if ((c =='d')|| (c == 'D'))// dollars
	{
		if (num > 9)
		{
			dollars = add2 + (num%10);
			add3 = num / 10;
		}
		else 
		dollars = num;
		tdollars = tdollars + add3;
		if (num>9)
		{
			if (tdollars > 9)
			{
				overflow++;
			}
			else
			tdollars ++;
		}
	}
	
	else 
	{
		exit (1);
	}
	cout<<"***************** "<<endl;
	cout<<"\t"<<tdollars<<dollars<<":"<<tcents<<cents<<endl;
	cout<<"***************** "<<endl;
}

