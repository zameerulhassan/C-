//input steam test file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream xStream; //stream variable or object for input
	ofstream yStream; //stream variable or object for output
	
	xStream.open("input_zam.txt"); //opening text file
	yStream.open("output_zam.txt"); //opening outputfile
	int first, second, third;
	xStream >> first >>second >>third; //storing or getting 3 ints existing in input file, using xSteaam 
	yStream <<"The sum of the first 3\n";
	yStream <<"numbers in infile.dat\n";
	yStream <<"is : " << (first + second + third);
	yStream <<endl;
	
	xStream.close();
	yStream.close();
	return 0;
}

