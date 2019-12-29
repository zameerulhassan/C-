//DISPLAY 7.4 Function with an Array Parameter
//Function Declaration

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<ctype.h>
using namespace std;
void fill_up(int a[], int size);

//Precondition: size is the declared size of the array a.
//The user will type in size integers.
//Postcondition: The array a is filled with size integers
//from the keyboard.

//Function Definition
//Uses iostream:

int main()
{
	int size, a[size];
	cout<<"Please enter size of the array";
	cin>>size;
	void fill_up();
	return 0;
}
void fill_up(int a[], int size)
{
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++)
        cin >> a[i];
    size--;
    cout << "The last array index used is " << size << endl;
}


