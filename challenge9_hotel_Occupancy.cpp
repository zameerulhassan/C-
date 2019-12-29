// hotel occupancy on each floor, 
//display total rooms, occupied rooms, avearage unoccupied.
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	int roomsOnFloor = 0;
	int totalRooms = 0;
	int totalFloors = 0;
	int occupiedRoomsOnFloor = 0;
	int totalOccupiedRooms = 0;
	float percentOccupied = 0.0;
	
	cout << "enter no. of floor \n";
	cin >> totalFloors;
	while (totalFloors < 1)
	{
		cout << "No. of floors must be one or more \n";
		cout << "Enter floors again \n";
		cin >> totalFloors;
	}
	for (int i = 1; i <= totalFloors; i++)
	{
		if (i !=13)
		{
			cout<< "Enter no of rooms on the floor " <<" no "<<i <<endl;
			cin >> roomsOnFloor;
			while (roomsOnFloor < 10)
			{
				cout << "No. of rooms on the floor, must be atleast 10, please re-enter \n";
				cin >> roomsOnFloor;
			}
			cout << "How many rooms are occupied \n";
			cin >> occupiedRoomsOnFloor;
		}

		totalRooms += roomsOnFloor;
		totalOccupiedRooms +=  occupiedRoomsOnFloor;		
	}
		percentOccupied =  (totalOccupiedRooms *1.0f / totalRooms) * 100.0f; // one of the number should be float
		cout << "The Hotel Has Total of " << totalFloors << " Floors \n " ;
		cout << "The Hotel has total of " << totalRooms << " Rooms \n";
		cout << "There are total " << totalOccupiedRooms << " occupied rooms \n";
		cout << "Total of "<< totalRooms - totalOccupiedRooms << " rooms are empty."<<endl;
		cout << "Total occupancy is : " <<setprecision(2)<< fixed << percentOccupied << "%\n";

	return 0;
	
}
