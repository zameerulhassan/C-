
#include<iostream>
using namespace std;
int main()
{
char t1, t2;
int startingHour, startingMinute;
double cost, durationOfCall; 
cout<<"Please insert day of the week (Valid designation are Mo, Tu, We, Th, Fr, Sa, Su)\n";
cin>>t1>>t2;
if ((t1==false)||(t2==false))
	{
	cout<<"Invalid Entry";
	return 0;
	}
		cout<<"Please enter Starting Hour of the call : "<<endl;
		cin>>startingHour;
		cout<<"Please enter Starting Minute of the call: "<<endl;
		cin>>startingMinute;
		cout<<"Please enter Duration of the call: "<<endl;
if ((startingHour==false)||(startingMinute==false))
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
			else if ((t1=='T'||t1=='t')&&(t2=='u'||t2=='U'))
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

