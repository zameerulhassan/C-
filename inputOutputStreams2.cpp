//input steam test file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream myInputStream;
	ofstream myOutputStream;
	
	myInputStream.open("infile2.dat");
	myOutputStream.open("outfile2.dat");
	double first, second, third;
	myInputStream >> first >>second >>third;
	myOutputStream <<"The sum of the first 3\n";
	myOutputStream <<"numbers in infile.dat\n";
	myOutputStream <<"is : " << (first + second + third);
	myOutputStream <<endl;
	
	myInputStream.close();
	myOutputStream.close();
	return 0;
}

