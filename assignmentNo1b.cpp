//Assignment No. 1
// Date: 20 Sept-2018
// This program  computes the cost of a long-distance phone call. The cost of a call is 
// determined according to the following rate schedule.
// a. Any call started between 8:00am and 6:00pm, Monday through Friday is billed at a rate of $0.40 per minute.
// b. Any call starting before 8:00am or after 6:00pm, Monday through Friday is billed at a rate of $0.25 per minute.
// c. Any call started on a Saturday or Sunday is billed at a rate of $0.15 per minute.


#include<iostream>
using namespace std;
int main()
{
    string dayOfWeek;
    int startingTime, endingTime;
    int durationOfCall;
    float totalCost;
    float x =10.25;
    cout<<"Please enter day you are made the call\n";
    cin>>dayOfWeek;
    cout<<"You made this call on \n"<<dayOfWeek;
    cout<<"\n";
    //Any call started between 8:00am and 6:00pm, Monday through Friday is billed at a rate of $0.40 per minute.
    //Any call starting before 8:00am or after 6:00pm, Monday through Friday is billed at a rate of $0.25 per minute.
    //Any call started on a Saturday or Sunday is billed at a rate of $0.15 per minute.
    cout<<"Please Enter Starting Time of the Call in 2400 Format\n";
    cin>>startingTime;
    cout<<"Please Enter Ending Time of the Call in 2400 Format\n";
    cin>>endingTime;
    cout<<"Total Duration of the Call in Minutes is:";
    durationOfCall = endingTime - startingTime;
    cout<<durationOfCall;
    cout<<endl;
    cout<<"Total Cost of long-distance phone call is:$";
    totalCost = durationOfCall*x;
    cout<<totalCost;
    return 0;
}
