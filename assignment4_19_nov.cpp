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
#include<string>
#include<cstring>
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
	}
	while(!fin.eof()); 
	fout<<endl;
	
	{
	for(int x=0;x<4; x++){
		vowelCount[x];
		}
		vowelCount[4]-1;
	int a, b, c, d, e =0;
	a= vowelCount[0];
	b= vowelCount[1];
	c= vowelCount[2];
	d= vowelCount[3];
	e= vowelCount[4]-1;
	int counter=0;
	while(counter<=vowelCount[0]){
	fout<<"*";	
	}
	
	
		
	}
}
  
