#include "Header1.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

//Global declarations store here
void numAdder(char input);
char input;
bool countLoop;
double countSum = 0.00;
double adder = 0.00;
unsigned int overFlow = 0;

class RedClicker {
public:
	
	void initialProcessor()
	{
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "\n" << "Overflow is: " << overFlow << "|| Current count is: $" << countSum;
		cout << "\n" << "Select an option[a][s][d][f][r][x][o]: ";
		cin >> input;
		numAdder(input);
	}
	
	void mainProcessor()
	{
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout << "\n" << "Overflow is: " << overFlow << "|| Current count is: $" << countSum;
		cout << "\n" << "Select an option[a][s][d][f][r][x][o]: ";
		cin.ignore(1000, '\n');
		cin >> input;
		numAdder(input);
	}

private:


};

//Banner is being stored outside via the Header1.h inside FILE_STORE.cpp

double countHolder(float adder)	//This function holds the value for the redclicker.
{								
	countSum = countSum + adder;
	countSum = countSum * 01.00;
	if (countSum >= 100) //Will warn the user if the count exceeds $100
	{					 //This will add 1 point to the overflow
		countSum = 0;
		overFlow++;

	}
	return countSum;
}

void numAdder(char input)   //This function is for processing the user's input.
{							//A switch case is used as a selector for the user's input. Depending on the input,
		switch (input)		//certain choices will will add an increment based on a fixed value that will be sent
		{					//to the value processor.
		case 'a':
		case 'A':
			countLoop = true;
			adder = adder + 10.00;//This is a sample of an incrementer. Since this is an option for a Tens positon
			countHolder(adder);		//an increment of 10 is sent to the function counterHolder.
			adder = 0.00;	
			break;
		case 's':
		case 'S':
			countLoop = true;
			adder = adder + 01.00;
			countHolder(adder);
			adder = 0.00;
			break;
		case 'd':
		case 'D':
			countLoop = true;
			adder = adder + 00.10;
			countHolder(adder);
			adder = 0.00;
			break;
		case 'f':
		case 'F':
			countLoop = true;
			adder = adder + 00.01;
			countHolder(adder);
			adder = 0.00;
			break;
		case 'r':				//This case here allows the user to reset the progress of the counter
		case 'R':
			cout << "Your progress has been reset." << endl;
			countSum = 0;		//counters are reset to zero
			overFlow = 0;		//the overflow counter is also reset to zero
			countLoop = true;
			break;
		case 'o':
		case 'O':
			bannerOptions();
			countLoop = true;
			break;
		case 'x':				//This case allows the user to end the session. A banner holding the final value will
		case 'X':				//also be displayed for the convenience of the user.
			cout << "The final count is: $" << countSum << endl;
			cout << "Thank you for using the RED CLICKER! \nHave a good day!" << endl;
			countLoop = false;
			break;
		default:				//Any wrong input gets sent here. A prompt will ask the user if he/she will want to start again or just exit.
			cout << "That is a wrong input. Please try again or type x to exit." << endl;
			countLoop = true;
			break;
		}
}
int main()//This is the main processor. It loads and controls all the functions as they are required
{
	bannerOptions();			//The banner is called from outside this cpp.
	RedClicker object0;			//A class is utilised here
	object0.initialProcessor();	//and here
	
	cout << "\n" << "Overflow is: " << overFlow << "|| Current count is: $" << countSum;
	cout << "\n" << "Select an option[a][s][d][f][r][x][o]: "  ;
	cin >> input;
	numAdder(input);
	while (countLoop == true)	//This loop allows the user to keep using the processor until satisfied.
	{ 
		RedClicker object1;
		object1.mainProcessor();
	}
	system("pause");
	return 0;
}
