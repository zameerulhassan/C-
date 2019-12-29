/*This program does the following:
• Asks the user for a file to read.
• Reads through that file and counts all the vowels
• Creates an output file with the same name plus the word “Analysis” that contains a bar graph of the frequency.
*/

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>
#include<string.h>
using namespace std;

void formatAndCount(ifstream& InputFile, int arr[]); 
//function prototype: takes an input stream and an array as parameters and fills the array with the counts of the vowels

/*precondition: 
 The streams inputfile (user is prompted to choose txt file as input) 
 input file must be in the same directory
 
 postcondition: 
 Total no. of occurances of vowels in the input file is cacluated.
 the count of vowels is gathered in array (vowelCount[]).
*/ 



//function prototype: prints graph
void printAsterisks(int n); 
//function prototype: x-axis scale
void printScale(); 

char s3[30];
//global variable (to save output file name) to be used in main and other functions.

int vowelCount[5]={0}; // array to capture vowels count.
char vowels[6]= "AEIOU";
// array to hold vowel names.

ifstream fin;
ofstream fout;
	
int main()
{
	cout<<"Vowel Counter Program"<<endl;
	cout<<"This program does the following:"<<endl;
	cout<<"- Asks the user for a file to read."<<endl;
	cout<<"- Reads through that file and counts all the vowels"<<endl;
	cout<<"- Creates an output file with the same name plus the word 'Analysis'"<<endl;
	
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
	strncpy (s3, "Analysis ",15); //
	fout.open(strncat(s3, inFileName, 15)); //open() function calls 'strncat' to give output file desired name.
		if (fout.fail())
		{
			cout<<"Output file opening failed: ";
			exit(1);
		}
	formatAndCount(fin, vowelCount); //function call as per assignment requirements.
	cout<<"Generating Report.... Successfully Generated.: ";
	
	fin.close();
	fout.close();
	return 0;
}




//---------------------------------------------
//Function definitions.
void formatAndCount(ifstream&, int arr[])
{
	char next;
	int local[5] ={0};
	do
	{
		fin.get(next);
		if ((next == 'a')|| (next == 'A'))
		{
			vowelCount[0]++; 	
		}
		else if ((next == 'e')||(next == 'E'))
		{
				vowelCount[1]++;  	
		}
		else if ((next == 'i')||(next == 'I'))
		{
				vowelCount[2]++;	
		}
		else if ((next == 'o')||(next == 'O'))
		{
				vowelCount[3]++;	
		}
		else if ((next == 'u')||(next == 'U'))
		{
				vowelCount[4]++;	
		}
			for(int x=0;x<5; x++){
			local[0]=vowelCount[0];
			local[1]=vowelCount[1];
			local[2]=vowelCount[2];
			local[3]=vowelCount[3];
			local[4]=vowelCount[4]-1;
	}		
		
	}
	while(!fin.eof()); 

	fout<<endl;
	for(int x=0;x<5; x++){
	fout << vowels[x]<<"|";
	printAsterisks(local[x]);
	fout<<endl;	
	}	
	printScale();
}                  

// definition of printAsterisks
void printAsterisks(int n)
{
    using namespace std;
    for (int count = 0; count <n; count++)
    {
     fout << "*";	
	} 
}
// definition of printScale
void printScale()
{
    fout <<" +----+----+----+----+----+----+----+----+";
	fout <<endl;
	fout <<" 0    5    10   15   20   25   30 . . . "; 
}

