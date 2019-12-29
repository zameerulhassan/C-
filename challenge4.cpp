// calories burnted in 5, 10, 15, 20 25, 30 minutes.
// per minute calories burnt =3.9
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float caloriesBurt;
	float caloreisPerMinute = 3.9;
	for (int i = 5; i <= 30; i+=5)
	{
		caloriesBurt = i * caloreisPerMinute;
		cout << std::setw(25)<< "Calories Burnt in " << i<<" minutes"<< " is " <<std::setw(4)<< std::setprecision(3)<<std::showpoint<< caloriesBurt <<endl;
	}
	return 0;
}
