//This program illustrates formatting instructions.
//reads file (rawdata.dat) 
//writes the numbers to screen & to putfile file neat.dat in formatted way.

#include<iostream>
#include<fstream>
#include <cstdlib> 
#include <iomanip> //needed for setw
using namespace std;

void make_neat(ifstream& messy_file, ofstream& neat_file, int number_after_decimalpoint, int field_width);
//precondition: The streams messy_file and neat_file are connected to files using function open
//postcondition: the numbers from messy file are printed on screen and output file
//field_width (=12 means total place value e.g. if no is 4, it will be printed after 11 spaces)
//but if no. is 1234.50 (it take 7 places, so 12-7 = 5) first 5 places will be empty and then it will print no, i.e. 1234.50
int main()
{
	ifstream fin;
	ofstream fout;
	
	
	// 'fin' and 'fout' are now stream objects (if stream and ofstream)
	//what does that mean
	//cout<< is not required to write in output file, because 'fout' will act as stream itself
	//thats why in the function you don't see streamout, fout (neat_file, name of file in the functions) acts as stream.
	fin.open("rawdata.dat");
	if(fin.fail())
	{
		cout<<"Input File Opening Failed\n";
		exit(1);
	}
	fout.open("neat_file");
	if(fout.fail())
	{
		cout<<"Output File Opening Failed\n";
		exit(1);
	}
}
	
	make_neat(fin, fout, 5, 12);
	return 0;
}

void make_neat(ifstream& messy_file, ofstream& neat_file, int number_after_decimalpoint, int field_width)
{
	neat_file.setf(ios::fixed); //not in e-notation
	neat_file.setf(ios::showpoint);
	neat_file.setf(ios::showpos);
	neat_file.precision(number_after_decimalpoint); // it is like writing precision(2) or precision(5) i.e.precision(any int)
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.setf(ios::showpos);
	cout.precision(number_after_decimalpoint);
	cout<<endl;
	
	double next;
	while (messy_file >> next)
	{
		cout << setw(field_width)<<next << endl;
		neat_file << setw(field_width)<<next <<endl;
	}
}


/*Writing to a File
While doing C++ programming, you write information to a file from your program using the stream 
insertion operator (<<) just as you use that operator to output information to the screen. 
The only difference is that you use an ofstream or fstream object instead of the cout object.

Reading from a File
You read information from a file into your program using the stream 
extraction operator (>>) just as you use that operator to input information from the keyboard. 
The only difference is that you use an ifstream or fstream object instead of the cin object.*/
