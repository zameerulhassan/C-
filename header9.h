
/* - assignment No. 6 (2018)
this header file defines class groceryCounter, functions/objects that may be used in any program
if this header file is included. 
User may add cents, dimes, dollars and tens of dollars by pressing 

	'A' OR 'a' for cents. (1 cent will be added to counter)
	'S' OR 's' for dime. (1 cent will be added to counter)
	'D' OR 'd' for Dollar.(1 cent will be added to counter)
	'F' OR 'f' for Ten-Dollars. (1 cent will be added to counter)
	'R' OR 'r' to REST Counter to $ (00:00).
	'O' OR 'o' to see OverFlow (Accumulative Overflow will be displayed.)
*/
#ifndef FILE_STORE
#define FILE_STORE
#include <iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include <cmath>
#include<string.h>
#include<string>
#include<algorithm>
using namespace std;

/*CLASS groceryCounter*/
class groceryCounter
	{
		public:	
			void incr1(); // adds 1 cent to counter
			void incr10(); // adds 1 dime to counter
			void incr100(); // adds 1 dollar to counter
			void incr1000();// adds 10 dollars to counter
			void reset(); // resets counter to 00:00
			void overFlow(); // capturs & displays overflowed values.
			
			groceryCounter;
			groceryCounter(int, int, int, int, int);
	
		private:
			int y;
			int cents;
			int dollars;
			int dime;
			char c;
			int overflow1;
			int overflow2;
			int overflow3;
			int overflow4;
			bool over = false;
			int tdollars;
			bool overFlowx();
	};


// this class has 2 constructor, one with arguemetns, the other without arguments
groceryCounter::groceryCounter(int, int, int, int, int)
/* takes 5 ints as aurguments - to initialize their values.*/ 
	{
	
	}
groceryCounter::groceryCounter()
	/*since I have defined other constructors, so I had to define default constructor,*/ 
	{
		cents=0;
		dime =0;
		dollars=0;
		overflow1=0;
		overflow2=0;
		overflow3=0;
		overflow4=0;
		tdollars=0;
	}


/*methods of class*/
void groceryCounter:: incr1()// prompt user for , how many coins you are entering. 
	{
	cents++;
		if (cents >= 9)
		{
		 cents = 9; 
		 // cents value does not exceed 9 , once this is value is hit, overflow starts capturing values beyond 9
		 overflow1 ++;
		}
	
	}

void groceryCounter:: incr10()// prompt user for , how many coins you are entering. 
	{
	 dime++;
		if (dime >= 9)
		{
		 dime = 9;
		 // dime value does not exceed 9 , once this is value is hit, overflow starts capturing values beyond 9
	
		 overflow2 ++;
		}
	}

void groceryCounter:: incr100()// prompt user for , how many coins you are entering. 
	{
	 dollars++;
		if (dollars >= 9)
		{
		 dollars = 9;
		 // cents value does not exceed 9 , once this is value is hit, overflow starts capturing values beyond 9
	
		 overflow3 ++;
		}
	}
void groceryCounter:: incr1000()// prompt user for , how many coins you are entering. 
	{
	 tdollars++;
		if (tdollars >= 9)
		{
		 tdollars = 9;
		 // cents value does not exceed 9 , once this is value is hit, overflow starts capturing values beyond 9
	
		 overflow4 ++;
		}
	}
	
void groceryCounter:: reset()
/*resets counter to 00:00*/ 	
	{
	cents=0;
	dime =0;
	dollars=0;
	overflow1=0;
	overflow2=0;
	overflow3=0;
	overflow4=0;
	tdollars=0;
	}		

void groceryCounter::overFlow()
/*displays overflow*/ 
	{
		cout<<endl;
		cout<<"Total OverFlow is :"<<endl;;
		cout<<"     &&&&&&&&&&&"<<endl;
		cout<<"\t"<<overflow4<<overflow3<<" : "<<overflow2<<overflow1<<endl;
		cout<<"     &&&&&&&&&&&"<<endl;

	}
bool groceryCounter::overFlowx()
/*check bool overflow true or false*/
	{
		if ((overflow1!=0)||(overflow2!=0)||(overflow3!=0)||(overflow4!=0))
		{
			over = true;
			overFlow();
		}
	}
#endif	
