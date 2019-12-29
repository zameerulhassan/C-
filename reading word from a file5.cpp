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
	
		int vsize=wordFoundVector.size();
		if (vsize==0)
		{
			cout<<"No words found";
			return 1;
		}
	int wordcounter =0;
	string tempword = wordFoundVector[0];
	vector <int> wordCountVector;
	for(unsigned int i =0; i<wordFoundVector.size(); i++)
	{
		if (tempword==wordFoundVector[i])
		{
			wordcounter=1;
			wordCountVector.push_back(wordcounter);
			tempword = wordFoundVector[i];	
		}
	else
	{
	wordcounter++;
	wordCountVector.push_back(wordcounter);
	}
		}
	//wordFoundVector.erase(std::unique(wordFoundVector.begin(), wordFoundVector.end()), wordFoundVector.end());
//Removes all but the first element from every consecutive group of equivalent elements in the range [first,last).

	for(unsigned int i =0; i<wordFoundVector.size(); i++)
	{
			cout<<setw(20)<<wordFoundVector[i]<<setw(5)<<wordCountVector[i]<<endl;

	}
	
		
	
	fin.close();
	return 0;
}

