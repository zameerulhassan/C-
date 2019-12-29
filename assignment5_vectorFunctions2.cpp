/*This program demos the following:
fill vector
revese 
evens
replace

*/
#include<iostream>
#include<vector>
using namespace std;
//function declaration:
void fillVector(vector<int>&);
//fillVector  
//parameter vector<int>& i.e, with reference.- the vector to be filled.
// pass vectors by reference, becuase they are very larnge in memory.
//passing by ref does not make duplicate / copies.
 
// we can add const modifier with vectore if we still want to pass by reference and make sure functiondoes not
//change vector.
void printVector(const vector<int>&);
//since this function only prints values without any changes, so we use const modifier.
//take parameter as const vector<int>& the vector to be printed.

void reverse(const vector<int>&);
//reverse functions. take aurgements as vector. 
//we can make this const, to ensure it does not change vector.
//vector to be printed backwards.

void printEvens(const vector<int>&);
// prints evens
void replace(vector<int>&);
//replaces to values- actually swaps.
//still passing by reference but not as const
int main()
{
	vector<int> myVector;
	cout<<endl;
	fillVector(myVector);
	cout<<endl;
	printVector(myVector);
	cout<<endl;
	reverse(myVector);
	cout<<endl;
	printEvens(myVector);
	cout<<endl;
	replace(myVector);
	cout<<endl;
	return 0;
}
void fillVector(vector<int>& vector)
{
	cout<<"Type in a list of number (-1 to stop) : ";
	int input;
	cin>>input;
	while(input !=-1)
	{
		vector.push_back(input);
		cin>>input;
	}
	cout<<endl;
}

void printVector(const vector<int>& newMyVector)

{
	cout<<"Vector is here ";
	for(unsigned int i =0; i<newMyVector.size(); i++)
	{
		cout<<newMyVector[i]<<" ";
	}
	cout<<endl;
}
void reverse(const vector<int>& vector)
{
	cout<<"The revese Vector is here ";
	for(unsigned int i =vector.size(); i>0; i--)
	//vector.size() should be vector.size ()+1, but when i=1, i will never reach 0, so we played
	// printing vector index at [i], we are printing index @ [i-1], this solves both problems.
	{
		cout<<vector[i-1]<<" ";
	}
	cout<<endl;
}

void printEvens(const vector<int>& vector)
{
	cout<<"Even numbers from Vector are: ";
		 for(unsigned int i =0; i<vector.size(); i++)
		 {
		 	if ((vector[i] % 2)==0)
			 {
			 	cout<<vector[i]<<" ";
			 }
		 }	
}
void replace(vector<int>& vector)
{
	cout<<endl;
	int old, replace = 0;
	cout<<"Type in a number to be replace with another number :";
	cin>>old>>replace;
	for(unsigned int i =0; i<vector.size(); i++)
	{
		if(vector[i]==old)
		{
			vector[i]=replace; 
		}
	cout<<vector[i]<<" ";
	}
}
