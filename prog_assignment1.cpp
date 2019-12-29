# include <iostream>
using namespace std;
main( )
{
      int sum,num,lowerlimit,upperlimit;
      lowerlimit = 0;
      upperlimit = 0;
      sum = 0;
      num = 1;    
		cout << "Please enter the upper limit of number (greater than Lower Limit)		\n";
		cin >> upperlimit;
		cout << "Please enter the the lower limit of number (greater than zero)	\n";
		cin >> lowerlimit;
      while (lowerlimit>=upperlimit)
      	{
      		cout<<"Upper Limit must be greater than LowerLimit";
      		return 0;
		  }
	  while(num <= upperlimit)
          {
          	
              if (num %4 !=0)       
       		    sum = sum + num;	                
                num = num + 1;
	
				}
              cout << "the sum of numbers between \n "<< lowerlimit  << "  and "<<upperlimit;
                cout << " \n without multiples of 4 is = "<< sum <<"\n\n\n";     
		
                
				system(" Pause \n ");
                 }
