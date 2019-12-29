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
#include<algorithm>
using namespace std;
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
	vector <string> wordFoundVector;
	while(fin>>wordFound)
	{
		for(int i = 0; wordFound[i]; i++)
		{
		wordFound[i] = tolower(wordFound[i]);
		}
		
		wordFoundVector.push_back(wordFound);
		
	}
	std::sort(wordFoundVector.begin(),wordFoundVector.end());
	for(unsigned int i =0; i<wordFoundVector.size(); i++)
	{
		cout<<wordFoundVector[i]<<" ";
	}
	fin.close();
	return 0;
}

