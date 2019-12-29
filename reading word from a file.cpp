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
ifstream fin;
ofstream fout;
int main()
{
	fin.open("words.txt");
	string wordFound;
	
	while(fin>>wordFound)
	{
		for(int i = 0; wordFound[i]; i++)
		{
		wordFound[i] = tolower(wordFound[i]);
		}
		cout<<wordFound;
		cout<<endl;
	}
	fin.close();
	return 0;
}

