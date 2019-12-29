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
		void incr1();
		void incr10();
		void incr3();
		void incr4();
		void getCount ();
		void overFlow();
		//void set(int newMonth, int newDate);
	//	int getCount();
	private:
		//bool checkInput();
		int cents;
		int dollars ;
		int tcents =0 ;
		int tcents2;
		int tdollars;
		int num;
		char c;
		int total;
		int overflow;
		int add1;
		int add2;
		int add3;
		bool over = false;
		
		
};

int main()
{
	groceryCounter redCounter;
	int x;
	//groceryCounter::getOutPut();
	cout << "Please enter 1 to add coins to counter"<<endl;
	cin >>x;
//	do
//	{
	//redCounter.incr1();	
	redCounter.incr10();
//	}
//	while (over = false);


	
	
	///
//	groceryCounter redCounter;
	
//	redCounter.inPut();
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
/*
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
*/
void groceryCounter:: incr1()// prompt user for , how many coins you are entering. 
	{ 
		int noOfCoins;
		cout<<"Enter no of coins you want to insert";
		cin>>noOfCoins;
		if (noOfCoins > 9)
			{
			cents = (noOfCoins % 10);
			tcents = tcents + (noOfCoins / 10);
			}
		else 
			{
			cents = noOfCoins;
			cout<<"total cents  : ";
			cout<<cents;
			cout<<"total dime   : ";
			cout<<tcents;
			}
	}
	
	void groceryCounter:: incr10()// prompt user for , how many coins you are entering. 
	{ 
		int noOfCoins;
		cout<<"Enter no of coins you want to insert";
		cin>>noOfCoins;
		if (noOfCoins > 9)
			{
			tcents = (noOfCoins % 10);
			dollars = dollars + (noOfCoins / 10);
			}
		else 
			{
			tcents = noOfCoins;
			cout<<"total tcents  : ";
			cout<<tcents;
			cout<<"total dollars   : ";
			cout<<dollars;
			}
	}
void groceryCounter::overFlow()
{
	if (tdollars > 9)
	{
		over = true;
	}	
}	


