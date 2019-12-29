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
char again;
char c1, c2; // as per requirement using 2 char variables to capture 2 characters for week days.
int startingHour, startingMinute,choice;
int durationOfCall;
float cost;
string day;
const float weekEndRate=.15;
const float weekDaydRate=.40;
const float afterHoursRate=.25;
loop:cout<<"Please Enter Day of the Week\n";
 	 cout<<"(Valid designation are Mo, Tu, We, Th, Fr, Sa, Su)\n";
	 cin>>c1>>c2;
	 
if ((c1==false)||(c2==false))// If more than 2 characters are entered, the program will terminate.
{
cout<<"Invalid Entry";
return 0;	
}
cout<<"Please Enter Duration of the Call in Minutes\n";
cin>>durationOfCall;
cout<<"Please Enter Starting Time of the Call\n";
cout<<"Accepted format [ 1800 for 6 PM ] & [ 800 for 8 AM ] Only"<<endl;
cin>>startingHour;

if (((c1=='S')||(c1=='s')) ||((c2=='A')||(c2=='a')))
	{
		cost=weekEndRate*durationOfCall;
	}
		
else if ((c1!='S')||(c1!='s'))// if the first character of day is not 'S' or 's' then weekend rate is not applied.
	{
		if ((startingHour<800)||(startingHour>=1800))
		{
			cost=afterHoursRate*durationOfCall;
		}
			else 
			cost=weekDaydRate*durationOfCall;
	}
cout<<endl;
cout<<endl;
cout<<endl;
cout<<"********************************************"<<endl;
cout<<"Total Cost of The Call is : $"<<cost<<endl;
cout<<"********************************************"<<endl;
cout<<endl;
cout<<endl;
cout<<"Please Enter 1 to Calculate Yet Another Call OR 2 to Exit\n";
cout<<endl;
cin>>choice;
cout<<endl;
		switch (choice)
		{
			case 1:
				cout<<endl;
				goto loop;
				break;
			case 2:
				cout<<endl;
				cout<<endl;
				cout<<"**********Goodbye! *********";
				cout<<endl;
				cout<<endl;
				return 0;
			break;
			default:
				cout<<endl;
				cout<<"Invalid Entry";
				cout<<endl;
				return 0; 
				
		}
}
					
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		/*
		cout<<"You Made This Call On Weekend \n: ";
		cout<<"Rate Per Minute is $0.15 \n: ";
		cout<<"Please Enter Total Duration of the call :";
		cin>>durationOfCall;
		cost=weekEndRate*durationOfCall;
		cout<<"Total Cost Of the call is : \n";
		cout<<cost;*/
		/*case 2:
		//exit the program
		//return 0;
		//default
		//cout<<"Invalid Entry- Goodbye!";
		return 0;*/
		//return 0; 
		//cout<<"Please enter your choice";				
		//cin>>again;
		//if (again!='done')
		//cout<<"Please insert day of the week (Valid designation are Mo, Tu, We, Th, Fr, Sa, Su)\n";
		//cin>>c1>>c2;
/*	}
		else if ((c1!='S')||(c1!='s'))
			if ((startingHour<8)||(startingHour>=18))
			cost=afterHoursRate*durationOfCall;
			else 
			cost=weekDayEndRate*durationOfCall;
		//cin>>durationOfCall;
		cout<<"You Made This Call On Weekday \n: ";
		cout<<"Please Enter Total Duration of the call :";
		cout<<"Rate Per Minute is $0.40 \n: ";
		cout<<"Total Cost Of the call is : \n";
		cout<<cost;
}
/*	
		cout<<"Please enter Starting Hour of the call : "<<endl;
		cin>>startingHour;
if ((startingHour>24)||(startingHour<0))
	{
		cout<<"Invalid Entry"; //ensuring valid input values
		cout<<"Please enter your choice";				
		cin>>again;;
	}
		cout<<"Please enter Starting Minute of the call: "<<endl;
		cin>>startingMinute;
if ((startingMinute>60)||(startingMinute<0))
	{
		cout<<"Invalid Entry"; //ensuring valid input values
		cout<<"Please enter your choice";				
		cin>>again;
	}
		
cout<<"Please enter Duration of the call: "<<endl; //one of the input is duration of the call
cin>>durationOfCall;
if ((durationOfCall>1000)||(durationOfCall<0))
	{
		cout<<"Invalid Entry"; //ensuring valid input values
	}

if ((t1=='M'||t1=='m')&&(t2=='o'||t2=='O'))
	{
	 cout<<"You made this call on Monday"<<" at "<<startingHour<<":"<<startingMinute<<endl;
	 while (startingHour>=18||startingHour<8)
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
					 return 0;
 	}
	else if ((t1=='T'||t1=='t')&&(t2=='U'||t2=='u'))
			{
			 cout<<" at "<<startingHour<<":"<<startingMinute<<endl;
			 cout<<"You Made this call on Tuesday\n";
			 while (startingHour>=18||startingHour<8)
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
					 return 0;
			}
		else if ((t1=='W'||t1=='w')&&(t2=='e'||t2=='E'))
			{
		 		cout<<" at "<<startingHour<<":"<<startingMinute<<endl;
				cout<<"You Made this call on Wednesday\n";
				cout<<"Please enter your choice";				
				cin>>again;
		 	 while (startingHour>=18||startingHour<8)
			 	{
			 		cost = durationOfCall*.25;
			 		cout<<"***********************************"<<endl;
			 		cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
			 		cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;
			 		cout<<"***********************************"<<endl;
			 		return 0;
					cout<<"Please enter your choice";				
					cin>>again;
				 }
					 cout<<"***********************************"<<endl;
					 cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
					 cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;;
					 cout<<"***********************************"<<endl;
					 return 0;
			}
			else if ((t1=='T'||t1=='t')&&(t2=='h'||t2=='H'))
				{	
				 cout<<" at "<<startingHour<<":"<<startingMinute<<endl;
				 cout<<"You Made this call on Thursday\n";
				 return 0;
				 while (startingHour>=18||startingHour<8)
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
					 return 0;
				}
			else if ((t1=='F'||t1=='f')&&(t2=='r'||t2=='R'))
			{
			 cout<<"You Made this call on Friday\n";
			 cout<<" at "<<startingHour<<":"<<startingMinute<<" Hours "<<endl;
				 while (startingHour>=18||startingHour<8)
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
						 return 0;
			}

			/*if the above 5 days are do not start with s, 
			it mean the call was made on weekend day i.e saturday or sunday*/
/*
			else if (t1=='S'||t1=='s')
				{
				cout<<"You Made this call on Week End\n";
				cost = durationOfCall*.15;
				cout<<"***********************************"<<endl;
				cout<<"Total Calling Minutes are : "<<durationOfCall<<endl;
				cout<<"Total cost of the call : "<<"$"<<(double)cost<<endl;;
				cout<<"***********************************"<<endl;
				return 0;
				}
			else
				cout<<"Invalid Entry\n";
				cout<<"Please enter your choice";				
				cin>>again;
cout<<"Please enter your choice";				
cin>>again;
}
while (again!='N');

}
*/
