//program converts Fahrenheit to Celsius
//it uses functions
#include<iostream>
using namespace std;
void initializeScreen();
//to initialize the screen... star can be printed.

void getInput(double & fVariable); 
// using ampersend sign with data type means it call be reference.
double celsius(double fahrenheit);
//function convert f to c degrees
//in declaration, even data type (double) is sufficient, no need to name the variables)
void showResults(double fDegrees, double cDegrees);
//display the output.
//celisius is equivalent to fDegrees.
//in declaration, even data tyle (double) is sufficient, no need to name the variables)
int main()
{
	using namespace std;
	double fTemprature, cTemprature;
	//variables only main.
	
	initializeScreen();
	//function call
	getInput(fTemprature);

	

	cTemprature = celsius(fTemprature); //after '=' sign is function call
	/*How a program can use a function? It is very simple. The calling program just needs
	to write the function name and provide its arguments (without data types).*/
	showResults(fTemprature, cTemprature);
	return 0;
}

void initializeScreen()
{
	using namespace std;
	cout<<endl;
	cout<<"***************\n";	
}

double celsius(double fahrenheit)
{
	return ((5.0/9.0)*(fahrenheit - 32));
}

void showResults(double fDegrees, double cDegrees)
{
	using namespace std;
	cout<<fDegrees;
	cout<<" degree Fahrenheit is equivalent to \n";
	cout<<cDegrees<<" : degrees Celsius. \n";
	
	
}
void getInput(double & fVariable)
{
	cout<<"I will convert a Fahrenheit temprature ";
	cout<<"to Celsius\n";
	cout<<"Enter the Temprature in Fahrenheit : ";
	cin>>fVariable;
}




