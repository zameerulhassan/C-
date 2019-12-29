//this prog take file 'cad' as input and produces an updated/edited file with name cplusplusad

#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

void addPlusPlus(ifstream& inStream, ofstream& outStream);
//function to replace character 'C' (in input file) with 'C++' in output file

int main()
{
	ifstream fin;
	ofstream fout;
	cout<<"Begin Editing Files \n";
	fin.open("cad.dat");
	if (fin.fail())
	{
		cout<<"invalid file opening failed: ";
		exit(1);
	}
	fout.open("cplusplus.dat");
	if (fout.fail())
	{
		cout<<"Output file opening failed: ";
		exit(1);
	}
	addPlusPlus(fin, fout);
	return 0;
}
void addPlusPlus(ifstream& inStream, ofstream& outStream)
{
	char next;
	inStream.get(next);
	while(!inStream.eof())
	{
		if (next == 'C')
			outStream<<"C++";
		else
			outStream<<next;
		inStream.get(next);		
	}
}







