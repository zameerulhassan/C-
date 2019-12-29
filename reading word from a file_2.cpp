/*This program demos the following:
reads word by word from a file
+
it coverts all the letters to lower.
comparing of words gets easy.

*/
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>
#include<string.h>
#include<string>
#include<vector>
using namespace std;
void readFromFile(ifstream&, string&);
//this functions reads from instream character by character.
// gathers word after word into a string.
//converts the words into lower case. this will help in comparing words.
//takes 2 parameters. 1- ifstream from input file, & 2- string array to gether words.
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
	string wordFound;
	readFromFile(fin, wordFound);

	fin.close();
	return 0;
}

//
	void readFromFile(ifstream&, string& string)
	{
			while(fin>>(string))
		{
			for(int i = 0; string[i]; i++)
			{
			string[i] = tolower(string[i]);
			}
			cout<<string;
			cout<<endl;
			
		}
		return;
	}




