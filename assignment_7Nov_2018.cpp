//This program gathers the number of times particular groups of characters appear in a file.
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
using namespace std;
void formatAndCount(ifstream& InputFile, ofstream& outPutFile); //function prototype.

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
	
		fout.open("stats.txt");
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
	double alpha =0, digit =0, control =0, lower =0, upper =0, punct =0, total = 0;
	// A 'do while' loop'
	do
	{
		fin.get(next);
		if (isalpha(next))
		{
			alpha++; //this is either an upper or lower case.
			if 	(islower(next))
			{
				lower++;
			}
			else 
				upper++; 	
		}
		else if (isdigit(next))
		{
			digit++;
		}
		else if (ispunct(next)) //this gathers punctuations in the file.
		{
			punct++;	
		}
		else if (isspace(next))
		{
			control++;
		}
	}
	while(!fin.eof()); 
	
	total = digit+control+upper+lower+punct;
	fout<<endl;
	fout<<endl;
	fout<<setw(45)<<"******************\n";
	fout<<setw(45)<<"Here is the output\n";
	fout<<setw(45)<<"******************\n";
	fout<<endl;

	fout.setf(ios::left);
	fout.precision(3);
	fout.setf(ios::showpoint);
	fout<<endl;
	fout<<"Description:          "<<"\t"<<"\t"<<"\t"<<"Occurance"<<"\t"<<"Percentage"<<"%"<<endl;
	fout<<"------------          "<<"\t"<<"\t"<<"\t"<<"---------"<<"\t"<<"----------"<<"-"<<endl;
	fout<<endl;
	//casting double to int to show number count without decimal.
	fout<<"Alphabetic characters: "<<"\t"<<"\t"<<"\t"<<(int)alpha<<"\t"<<"\t"<<(alpha/total)*100<<"%"<<endl;
	fout<<"Numeric characters: "<<"\t"<<"\t"<<"\t"<<(int)digit<<"\t"<<"\t"<<(digit/total)*100<<"%"<<endl;
	fout<<"Control characters: "<<"\t"<<"\t"<<"\t"<<(int)control<<"\t"<<"\t"<<(control/total)*100<<"%"<<endl;
	fout<<"Upper case characters: "<<"\t"<<"\t"<<"\t"<<(int)upper<<"\t"<<"\t"<<(upper/total)*100<<"%"<<endl;
	fout<<"Lower case characters: "<<"\t"<<"\t"<<"\t"<<(int)lower<<"\t"<<"\t"<<(lower/total)*100<<"%"<<endl;
	fout<<"Punctuation characters: "<<"\t"<<"\t"<<(int)punct<<"\t"<<"\t"<<(punct/total)*100<<"%"<<endl;
	fout<<endl;
	fout<<"Total number of characters in the file:"<<"\t"<<(int)total<<"\t"<<"\t"<<(total/total)*100<<"%"<<endl;
	fout<<endl;
}




