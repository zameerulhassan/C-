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
void addWord(string&,vector  <string>);
void reportToScreen();
vector <int> wordCountVector;
string wordFound;
vector <string> wordFoundVector;
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
	addWord(wordFound,wordFoundVector); /*function call to insert words into 
	a vector and then count occurances into a vector.*/
	reportToScreen(); // function call to print on the screen.
	fin.close();
	fout.close();
	return 0;
}
// function definition. i.e. addWord
void addWord(string &,vector <string>)
{
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
			return;
		}
	int wordcounter =0;
	string tempword = wordFoundVector[0];
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
			wordCountVector.push_back(wordcounter);
		}
	}
}
// function definition. i.e. reportToScreen	
void reportToScreen()
{
	for(unsigned int i =0; i<wordFoundVector.size(); i++)
	{
		cout<<setw(20)<<wordFoundVector[i]<<setw(5)<<wordCountVector[i]<<endl;
	}
}

