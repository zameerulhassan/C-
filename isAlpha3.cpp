//Demo isspace

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include<string.h>

using namespace std;
char s3 [30] = "Analysis ";
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
	

	cout<< endl;
	fout.open(strcat(s3, inFileName));
}






