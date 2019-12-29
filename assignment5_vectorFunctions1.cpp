/*This program demos the following:
.push_back("Zam");
myVector.begin()
insert(myVector.begin()+2, "Absolutely");
erase(myVector.begin());
myVector.empty()
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
	vector <string> myVector;
	myVector.push_back("Zam");
	myVector.push_back("is");
	myVector.push_back("good");
	myVector.push_back("guy");
	for(unsigned int i =0; i<myVector.size(); i++)
	{
		cout<<myVector.at(i)<<" ";
	}
	cout<<endl;
	
	//adds to the beginning 
	myVector.insert(myVector.begin(), "Yes");
	for(unsigned int i =0; i<myVector.size(); i++)
	{
	cout<<myVector.at(i)<<" ";
	}
	cout<<endl;
	
	//add to specific postion.
	myVector.insert(myVector.begin()+2, "Absolutely");
	for(unsigned int i =0; i<myVector.size(); i++)
	{
	cout<<myVector.at(i)<<" ";
	}
	cout<<endl;
	
	//erase from specific postion.
	myVector.erase(myVector.begin()+2);
	for(unsigned int i =0; i<myVector.size(); i++)
	{
	cout<<myVector.at(i)<<" ";
	}
	cout<<endl;
	
	//erase from beginning postion.
	myVector.erase(myVector.begin());
	for(unsigned int i =0; i<myVector.size(); i++)
	{
	cout<<myVector.at(i)<<" ";
	}
	cout<<endl;
	
	if(myVector.empty())
	{
	cout<<"myVector is empty!";	
	}
	else
	cout<<"myVector is NOT empty!";
	cout<<endl;
	
	myVector.clear();
	cout<<"myVector is empty!";
	return 0;
}



