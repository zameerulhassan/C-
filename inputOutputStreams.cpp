//input steam test file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream inStream;
	ofstream outStream;
	
	inStream.open("input_zam.txt");
	if (inStream.fail())// using 'fail' function that is member function of ifstream
	{
		cout<<"Input file opening failed \n";
		exit(1); //exit is also member function.
	}
	outStream.open("output_zam.txt" , ios::app);
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

