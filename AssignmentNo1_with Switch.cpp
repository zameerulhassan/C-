/*Assignment No. 1
Date: 26 Sept-2018
This program  computes the cost of a long-distance phone call. The cost of a call is 
determined according to the following rate schedule.
a. Any call started between 8:00am and 6:00pm, Monday through Friday is billed at a rate of $0.40 per minute.
b. Any call starting before 8:00am or after 6:00pm, Monday through Friday is billed at a rate of $0.25 per minute.
c. Any call started on a Saturday or Sunday is billed at a rate of $0.15 per minute.
*/


#include<iostream>
using namespace std;
int main()
{
string symbol1, symbol2;
cout<<"enter week day";
cin>>symbol1>>symbol2;
switch (symbol1)
{
case 'Moday':
cout<<"call was made on Moday";
break;
case 'Tuesday':
cout<<"call was made on Tuesday";
break;
case 'Wednesday':
cout<<"call was made on Wednesday";
break;
case 'Friday':
cout<<"call was made on Friday";
break;
case 'Saturday':
cout<<"call was made on Weekend";
break;
case 'Sunday':
cout<<"call was made on Weekend";
break;
defaul:
	cout<<"invalid entry";
}
return 0;
}



/*

char t1, t2;
int startingHour, startingMinute;
double cost, durationOfCall; 
cout<<"Please insert day of the week (Valid designation are Mo, Tu, We, Th, Fr, Sa, Su)\n";
cin>>t1>>t2;
if ((t1==false)||(t2==false))
	{
	cout<<"Invalid Entry"; //ensuring valid input values
	return 0;
	}
		cout<<"Please enter Starting Hour of the call : "<<endl;
		cin>>startingHour;
		cout<<"Please enter Starting Minute of the call: "<<endl;
		cin>>startingMinute;
		cout<<"Please enter Duration of the call: "<<endl; //one of the input is duration of the call
if (((double)startingHour==false)||((double)startingMinute==false))//ensuring input is valid
	{
		cout<<"Invalid Entry";
		return 0;
	}
cin>>durationOfCall;
if ((t1=='M'||t1=='m')&&(t2=='o'||t2=='O'))
	{
	 cout<<"You made this call on Monday"<<" at "<<startingHour<<":"<<startingMinute<<endl;
	 while (startingHour>=1800||startingHour<=800)
			 	{
			 		cost = durationOfCall*.25;
			 		cout<<"***********************************"<<endl;
			 		cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
			 		cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;
			 		cout<<"***********************************"<<endl;
			 		return 0;
				 }
					 cost = durationOfCall*.40;
					 cout<<"***********************************"<<endl;
					 cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
					 cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;;
					 cout<<"***********************************"<<endl;
 	}
	else if ((t1=='T'||t1=='t')&&(t2=='U'||t2=='u'))
			{
			 cout<<" at "<<startingHour<<":"<<startingMinute<<endl;
			 cout<<"You Made this call on Tuesday\n";
			 while (startingHour>=1800||startingHour<=800)
			 	{
			 		cost = durationOfCall*.25;
			 		cout<<"***********************************"<<endl;
			 		cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
			 		cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;
			 		cout<<"***********************************"<<endl;
			 		return 0;
				 }
					 cout<<"***********************************"<<endl;
					 cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
					 cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;;
					 cout<<"***********************************"<<endl;
			}
		else if ((t1=='W'||t1=='w')&&(t2=='e'||t2=='E'))
			{
		 		cout<<" at "<<startingHour<<":"<<startingMinute<<endl;
				cout<<"You Made this call on Wednesday\n";
		 	 while (startingHour>=1800||startingHour<=800)
			 	{
			 		cost = durationOfCall*.25;
			 		cout<<"***********************************"<<endl;
			 		cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
			 		cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;
			 		cout<<"***********************************"<<endl;
			 		return 0;
				 }
					 cout<<"***********************************"<<endl;
					 cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
					 cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;;
					 cout<<"***********************************"<<endl;
			}
			else if ((t1=='T'||t1=='t')&&(t2=='h'||t2=='H'))
				{	
				 cout<<" at "<<startingHour<<":"<<startingMinute<<endl;
				 cout<<"You Made this call on Thursday\n";
				 while (startingHour>=1800||startingHour<=800)
			 	{
			 		cost = durationOfCall*.25;
			 		cout<<"***********************************"<<endl;
			 		cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
			 		cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;
			 		cout<<"***********************************"<<endl;
			 		return 0;
				 }
					 cout<<"***********************************"<<endl;
					 cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
					 cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;;
					 cout<<"***********************************"<<endl;
				}
			else if ((t1=='F'||t1=='f')&&(t2=='r'||t2=='R'))
			{
			 cout<<"You Made this call on Friday\n";
			 cout<<" at "<<startingHour<<":"<<startingMinute<<" Hours "<<endl;
				 while (startingHour>=1800||startingHour<=800)
				 	{
				 		cost = durationOfCall*.25;
				 		cout<<"***********************************"<<endl;
				 		cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
				 		cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;
				 		cout<<"***********************************"<<endl;
				 		return 0;
					 }
						 cout<<"***********************************"<<endl;
						 cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
						 cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;;
						 cout<<"***********************************"<<endl;
			}

			/*if the above 5 days are do not start with s, 
			it mean the call was made on weekend day i.e saturday or sunday

			else if (t1=='S'||t1=='s')
				{
				cout<<"You Made this call on Week End\n";
				cost = durationOfCall*.15;
				cout<<"***********************************"<<endl;
				cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
				cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;;
				cout<<"***********************************"<<endl;
				}
			else
				cout<<"Invalid Entry\n";
				return 0;
}
*/
