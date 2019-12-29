//Demo isspace

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include <iomanip>
using namespace std;


int main()
{
	ifstream fin;
	ofstream fout;
	
	
	char inFileName[16];
	char outFileName[16];
	cout<< endl;
	cout<<" Please enter file name to open: \n";
	cin>>inFileName;
	cout<< endl;
	
	
	fin.open(inFileName);
	if (fin.fail())
	{
		cout<<"invalid file opening failed: ";
		exit(1);
	}
	
	cout<<" Please enter OUTPUT file name: \n";
	cin>>outFileName;
	cout<< endl;
	fout.open(outFileName);
	if (fout.fail())
	{
		cout<<"Output file opening failed: ";
		exit(1);
	}


	char next;
	int alpha =0;
	int digit =0;
	int control =0;
	int lower =0;
	int upper =0;
	int punct =0;
	int total = 0;

	do
	{
		fin.get(next);
		if (isalpha(next))
		{
			alpha++;
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
		else if (ispunct(next))
		{
			punct++;	
		}
		else if (isspace(next))
		{
			control++;	
		}
	}
	while(!fin.eof());
	fout<< "Here is the output";
	
	total = alpha+digit+control+upper+lower+punct;
	cout<<setw(50)<<"Alphabetic: "<<alpha<<endl;
	cout<<setw(50)<<"Numeric : "<<digit<<endl;
	cout<<setw(50)<<"Control : "<<control<<endl;
	cout<<setw(50)<<"Uppercase  : "<<upper<<endl;
	cout<<setw(50)<<" Lowercase: "<<lower<<endl;
	cout<<setw(50)<<" Punctuation: "<<punct<<endl;
	cout<<setw(50)<<" Total: "<<total<<endl;
	
	
	
	cout.precision(4);
	
}






