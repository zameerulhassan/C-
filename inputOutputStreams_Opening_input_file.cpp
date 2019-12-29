//input steam test file

#include<iostream>
#include<fstream>
#include <cstdlib>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	char inFileName[16];
	
	
	cout<<"Please enter file name to open: \n";
	cin>>inFileName;
	

	inStream.open(inFileName);
		if (inStream.fail())// using 'fail' function that is member function of ifstream.
		// this fail() functions checks, if opening file fails, the program halts.
	{
		cout<<"Input file opening failed \n";
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

