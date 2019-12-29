//Demo isspace

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctype.h>
using namespace std;


int main()
{
	ifstream fin;
	ofstream fout;
	fin.open("isspace.dat");
	if (fin.fail())
	{
		cout<<"invalid file opening failed: ";
		exit(1);
	}
	fout.open("hyphen_test.dat");
	if (fout.fail())
	{
		cout<<"Output file opening failed: ";
		exit(1);
	}


	char next;
	do
	{
		fin.get(next);
		if (isspace(next))
		fout.put('\n');
		else
		fout.put(next);	
	}
	while(!fin.eof());
}



