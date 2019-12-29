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
	vector <string> wordFoundVector2;
	while(fin>>wordFound)
	{
		for(int i = 0; wordFound[i]; i++)
		{
		wordFound[i] = tolower(wordFound[i]);
		}
		wordFoundVector.push_back(wordFound);
		
	}
	std::sort(wordFoundVector.begin(),wordFoundVector.end());
	vector <string>::iterator itr1=wordFoundVector.begin();

	int vsize=wordFoundVector.size();
	int wordcounter =0;
	string temp;
	vector <int> wordCountVector;
	for(unsigned int i =0; i<wordFoundVector.size(); i++)
	{

		if (*itr1 != *(itr1+1))
		{
					vector <string>::iterator itr1=wordFoundVector.begin();

			wordcounter=1;
			wordCountVector.push_back(wordcounter);
			wordFoundVector2.push_back(*itr1);

		}	
		else
		{
			wordcounter++;
			wordCountVector.push_back(wordcounter);
			wordFoundVector2.push_back(*itr1);

		}

	//wordFoundVector.erase(std::unique(wordFoundVector.begin(), wordFoundVector.end()), wordFoundVector.end());
	//cout<<setw(20)<<wordFoundVector[i]<<setw(5)<<wordCountVector[i]<<endl;
	cout<<setw(5)<<wordCountVector[i]<<endl;


	}
//Removes all but the first element from every consecutive group of equivalent elements in the range [first,last).

//	for(unsigned int i =0; i<wordFoundVector.size(); i++)
//	{
//			cout<<setw(20)<<wordFoundVector[i]<<setw(5)<<wordCountVector[i]<<endl;
//
//	}
	
		
	
	fin.close();
	return 0;
}

