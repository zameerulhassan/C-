# include <iostream>
using namespace std;
main( )
{
      int sum; 
	  int num;
	  int upperlimit;
     
      sum = 0;
      num = 1;
      
      cout << "Please enter the the upper limit you want to sum ";
      cin >> upperlimit;
         
      while(num <= upperlimit)
      {
                if ((num % 2 ) ==1)
                {
                            sum =  sum + num;
                }
                
                num = num + 1;
                }
                cout << "the sum of odd num of first "<< upperlimit;
                cout << "integers starting from 1 is  "<<sum;
                system("Pause");
                 }
