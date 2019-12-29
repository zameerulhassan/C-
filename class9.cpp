/* - assignment No. 6 (2018)
This program simulates a grocery counter with 4 integers representing cents, dimes, dollars
tens of dollars respectively (from left to right) for example. (00:00).
Initial values is (00:00),
'R' or 'r' can be entered to reset it to 00:00 any time.
The counter can only display : upto to 99:99

User may add cents, dimes, dollars and tens of dollars by pressing 

	'A' OR 'a' for cents. (1 cent will be added to counter)
	'S' OR 's' for dime. (1 dime will be added to counter)
	'D' OR 'd' for Dollar.(1 dollar will be added to counter)
	'F' OR 'f' for Ten-Dollars. (10 $ will be added to counter)
	'R' OR 'r' to REST Counter to $ (00:00).
	'O' OR 'o' to see OverFlow (Accumulative Overflow will be displayed.)
*/
#include <iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include <cmath>
#include<string.h>
#include<string>
#include<algorithm>
#include "header9.h" 
// "header9" this header file is included because class 'groceryCounter' and its functions are is defined here.
using namespace std;

int main()
{
	groceryCounter redCounter; //instance of class groceryCounter
	char c; 
	cout<<"Please enter The following Keys to add :"<<endl; 
	cout<<"'A'/'a' for cents."<<endl;
	cout<<"'S'/'s' for dime."<<endl;
	cout<<"'D'/'d' for Dollar."<<endl;
	cout<<"'F'/'f' for Ten-Dollars."<<endl;	
	cout<<"'R'/'r' to REST Counter to $ (00:00) "<<endl;
	cout<<"Please enter 'O' or 'o' to see OverFlow :";
	cout<<endl;
	do // this loop manages the flow, user may enter any choice of character from above.
	{
	cin>>c;	// user promted to enter choice
	{
		if (c == 'A'|| c == 'a')
		{
			redCounter.incr1();	// this method adds 1 cent to counter
		}
				
		else if (c == 'S'|| c == 's')
		{
			redCounter.incr10(); // this method adds 1 dime to counter
		}
		else if (c == 'D'|| c == 'd')
		{
			redCounter.incr100(); // this method adds 1 dollar to counter
		}
		else if (c == 'F'|| c == 'f')
		{
			redCounter.incr1000(); // this method adds 10-dollars to counter
		}
		else if (c == 'R'|| c == 'r')
		{
			redCounter.reset(); // this method resets counter to ( 00 : 00 )
		}
		else if (c == 'O'|| c == 'o')
		{
			redCounter.overFlow(); // this method displays accumulated overflow like (12:34)
		}
	} 
	cout<<endl;
	cout<<"Dollars in Counter :";
	cout<<endl;
	cout<<endl;
	cout<<"     **********";
	cout<<endl;
	cout<<"   $  :("<<redCounter.tdollars<<redCounter.dollars<<":"<<redCounter.dime<<redCounter.cents<<")";
	cout<<endl;
	cout<<"     **********";
	cout<<endl;
	}
	while ((redCounter.cents <=9)||(redCounter.dime <=9)||(redCounter.dollars <=9)||(redCounter.tdollars <=9));
	// the loop runs untill user opts for overflow exit.
	redCounter.overFlowx();
	return 0; 

}

