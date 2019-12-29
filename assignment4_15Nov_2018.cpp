//This program reads txt file and count vowels.
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>
#include<string.h>
using namespace std;
void formatAndCount(ifstream& InputFile, ofstream& outPutFile); //function prototype.
void printAsterisks(int n);
void printScale();
char s3 [30] = "Analysis ";
/*precondition: 
 The streams inputfile (user is prompted to choose txt file as input) 
 and 'stats.txt' are connected to files using function open.
 input file must be in the same directory
 
 postcondition: 
 Total no. of occurances and percentage of group of characters 
 from input file are collected/printed in output(stats.txt) file
*/ 

	ifstream fin;
	ofstream fout;
int main()
{
	char inFileName[16];
	cout<< endl;
	cout<<"Please Enter File Name (.txt) to Open: \n";
	cin>>inFileName;
	cout<< endl;
	fin.open(inFileName);
	if (fin.fail())
	{
		cout<<"invalid file opening failed: ";
		exit(1);
	}
	
		fout.open(strcat(s3, inFileName));
	if (fout.fail())
	{
		cout<<"Output file opening failed: ";
		exit(1);
	}
	//function call
	formatAndCount(fin, fout);
	cout<<"Processing is done: ";
	return 0;
}
//---------------------------------------------
//Function definition.
void formatAndCount(ifstream&, ofstream&)
{
	char next;
	int A =0;
	int E =0;
	int I =0;
	int O = 0; 
	int U = 0;
	// A 'do while' loop'
	do
	{
		fin.get(next);
		if ((next == 'a')|| (next == 'A'))
		{
			A++; //this is either an upper or lower case. 	
		}
		else if ((next == 'e')|| (next == 'E'))
		{
				E++; //this is either an upper or lower case. 	
		}
		else if ((next == 'i')|| (next == 'I'))
		{
				I++; //this is either an upper or lower case. 	
		}
			
		else if ((next == 'o')|| (next == 'O'))
		{
				O++; //this is either an upper or lower case. 	
		}
		else if ((next == 'u')|| (next == 'U'))
		{
				U++; //this is either an upper or lower case. 	
		}
	}
	while(!fin.eof()); 
	
	fout<<endl;
	fout<<endl;

	fout<<endl;
	fout << "A|";
	printAsterisks(A);
	fout<<endl;
	fout << "E|";
	printAsterisks(E);
	fout<<endl;
	fout << "I|";
	printAsterisks(I);
	fout<<endl;
	fout << "O|";
	printAsterisks(O);
	fout<<endl;
	fout << "U|";
	printAsterisks(U);
	fout<<endl;
	printScale();
 
	
}

void printAsterisks(int n)
{
    using namespace std;
    for (int count = 1; count <= n; count++)
        fout << "*";
}

void printScale()
{
    fout <<" +----+----+----+----+----+----+----+----+----+----+";
	fout<<endl;
	fout <<" 0    5    10   15   20   25   30 . . . "; 
}

