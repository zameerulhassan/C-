# include <iostream>
using namespace std;
main( )
{
      int sum; 
      int sum2; 
	  //*sum2 is to collect sum of multiple of 4*//
	  int num;
	  int upperlimit;
      int lowerlimit;
      sum = 0;
      num = 1;
      sum2 = 0;
      
	cout << "Please enter the the upper limit you want to sum ";
	cin >> upperlimit;
	cout << "Please enter the the lower limit you want to sum ";
	cin >> lowerlimit;
      while(num <= upperlimit)
      {
                sum = sum + lowerlimit;	                
                num = lowerlimit + 1;
                }
                cout << "the sum of numbers between  "<< upperlimit << "  and  "<< lowerlimit;
                cout << " is "<<sum;
                system("Pause");
                 }
