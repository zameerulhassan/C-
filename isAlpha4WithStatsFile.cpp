//Demo isspace

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
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
	
	cout<<"Processing is done: ";
	fout.open("stats.txt");
	if (fout.fail())
	{
		cout<<"Output file opening failed: ";
		exit(1);
	}
/*------
fout.open("neat_file");
	if(fout.fail())
	{
		cout<<"Output File Opening Failed\n";
		exit(1);
	}
}
*/

	char next;
	double alpha =0, digit =0, control =0, lower =0,upper =0,punct =0, total = 0;
	
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
	
	
	total = digit+control+upper+lower+punct;
	
	fout<<(std::left)<<"Here is the output\n";
	fout<<endl;

    // keep this block in separate function.
	fout.setf(ios::left);
	fout<<"Alphabetic characters: "<<"\t"<<"\t"<<"\t"<<alpha<<endl;
	fout<<"Numeric characters: "<<"\t"<<"\t"<<"\t"<<digit<<endl;
	fout<<"Control characters: "<<"\t"<<"\t"<<"\t"<<control<<endl;
	fout<<"Upper case characters: "<<"\t"<<"\t"<<"\t"<<upper<<endl;
	fout<<"Lower case characters: "<<"\t"<<"\t"<<"\t"<<lower<<endl;
	fout<<"Punctuation characters: "<<"\t"<<"\t"<<punct<<endl;
	fout<<"Total number of characters in the file:"<<"\t"<<total<<endl;
	fout<<endl;
	// keep this block in separate function.
	// don't forget to use do-while for this function as well.
	fout.precision(3);
	fout.setf(ios::showpoint);
	fout<<"Alphabetic characters Percntage: "<<"\t"<<"\t"<<"\t"<<(alpha/total)*100<<"%"<<endl;
	fout<<"Numeric characters Percntage: "<<"\t"<<"\t"<<"\t"<<"\t"<<(digit/total)*100<<"%"<<endl;
	fout<<"Control characters Percntage: "<<"\t"<<"\t"<<"\t"<<"\t"<<(control/total)*100<<"%"<<endl;
	fout<<"Upper case characters Percntage: "<<"\t"<<"\t"<<"\t"<<(upper/total)*100<<"%"<<endl;
	fout<<"Lower case characters Percntage: "<<"\t"<<"\t"<<"\t"<<(lower/total)*100<<"%"<<endl;
	fout<<"Punctuation characters Percntage: "<<"\t"<<"\t"<<"\t"<<(punct/total)*100<<"%"<<endl;
	fout<<"Total number of characters in the file Percntage:"<<"\t"<<(total/total)*100<<"%"<<endl;
	fout<<endl;	
}






