//sea level rising - table for 25 years.
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double level = 0;
	int years = 25;
	
	for (int i = 1; i <= years; i++)
	{
		level += 1.5;
		cout << "year " << std::setw(2) << i <<" level will rise :" 
		<<std::setprecision(4)<< level <<std::setw(4)<<" mm.\n";	
	} 
	return 0;
}
