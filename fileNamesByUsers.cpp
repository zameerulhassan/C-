//User is prompted to enter file name to open
//use promoted to name output file.

#include<iostream>
#include<fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	char inFileName[16];
	char outFileName[16];
	
	cout<<" This program gets three numbers from file\n";
	cout<<" You need to provide file name max 15 characters.\n ";
	cout<<" Then the sum will be stored in Output file. \n";
	cout<<" You need to provide output file name max: 15 characters \n";
	cout<< endl;
	cout<< endl;
	cout<<" Please enter file name to open: \n";
	cin>>inFileName;
	cout<< endl;



	inStream.open(inFileName);
		if (inStream.fail())// using 'fail' function that is member function of ifstream.
		// this fail() functions checks, if opening file fails, the program halts.
	{
		cout<<"Input file opening failed \n";
		exit(1); //exit is NOT function, it is part of #include <cstdlib>
	}
	cout<< endl;
	cout<<" Enter file name for output: \n";
	cin>>outFileName;
	
	outStream.open(outFileName, ios::app);
		if (inStream.fail())// using 'fail' function that is member function of ifstream.
		// this fail() functions checks, if opening file fails, the program halts.
	{
		cout<<"Output file opening failed \n";
		exit(1); //exit is NOT function, it is part of #include <cstdlib>
	}
	
	int first, second, third;
	inStream >> first >>second >>third;
	outStream <<"The sum of the first 3\n";
	outStream <<"numbers in infile.dat\n";
	outStream <<"is : " << (first + second + third);
	outStream <<endl;
	
	
	
	
	inStream.close();
	outStream.close();
	return 0;
}

