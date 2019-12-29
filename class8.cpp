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
#include "header8.h"
using namespace std;


int main()
{
	groceryCounter redCounter;
	char c;
	cout<<"Please enter 'A'-Cent. S-Dime D-Dollars F=Ten-dollar"<<endl;	
	
	cout<<endl;
	do
	{
	cin>>c;	
	//redCounter(0, 0, 0, 0, 0);
	{
	
	if (c == 'A'|| c == 'a')
	{
		redCounter.incr1();	
	}
			
	else if (c == 'S'|| c == 's')
	{
		redCounter.incr10();
	}
	else if (c == 'D'|| c == 'd')
	{
		redCounter.incr100();
	}
	else if (c == 'F'|| c == 'f')
	{
		redCounter.incr1000();
	}

	} 
	cout<<endl;
	cout<<"Dollars in Counter - :";
	cout<<endl;
	cout<<endl;
	cout<<"     **********";
	cout<<endl;
	cout<<"\t"<<redCounter.tdollars<<redCounter.dollars<<":"<<redCounter.dime<<redCounter.cents;
	cout<<endl;
	cout<<"     **********";
	cout<<endl;
}
	while (redCounter.tdollars <=9);
	return 0; 

}

void groceryCounter:: incr1()// prompt user for , how many coins you are entering. 
{
cents++;
	if (cents >= 9)
	{
	 cents = 9;
	 overflow ++;
	}

}

void groceryCounter:: incr10()// prompt user for , how many coins you are entering. 
{
 dime++;
	if (dime >= 9)
	{
	 dime = 9;
	 overflow ++;
	}
}

void groceryCounter:: incr100()// prompt user for , how many coins you are entering. 
{
 dollars++;
	if (dollars >= 9)
	{
	 dollars = 9;
	 overflow ++;
	}
}
void groceryCounter:: incr1000()// prompt user for , how many coins you are entering. 
{
 tdollars++;
	if (tdollars >= 9)
	{
	 tdollars = 9;
	 overflow ++;
	}
}

void groceryCounter:: getValues()
{
	groceryCounter(0, 0, 0, 0, 0);
	cin >> c;
	if (c == 'A'|| c == 'a')
	{
		incr1();	
	}		
	else if (c == 'S'|| c == 's')
	{
		incr10();
	}
	else if (c == 'D'|| c == 'd')
	{
		incr100();
	}
	else if (c == 'F'|| c == 'f')
	{
		incr1000();
	}
	cout<<endl;
	cout<<"Dollars in Counter - :";
	cout<<endl;
	cout<<"****";
	cout<<endl;
	cout<<tdollars<<dollars<<":"<<dime<<cents;
	cout<<endl;
	cout<<"****";
	cout<<endl;
}
	groceryCounter::groceryCounter(int, int, int, int, int)
	{
	
	}
	groceryCounter::groceryCounter()
	{
		cents=0;
		dime =0;
		dollars=0;
		overflow=0;
		tdollars=0;
	}
