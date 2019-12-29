//switch statment
#include<iostream>
using namespace std;
int main()
{
	int choice;
	do
	{
		
			cout<<endl;
			cout<<"Choose 1 to re-start the program";
			cout<<"Choose 2 to exit the program";
		cin>>choice;
		
		switch(choice)
			{
			case 1:
			break;
			case 2:
			break;
			default:
			cout<<"Not a valid Entry";
			cout<<"Choose Again";	
			}
	}
		while (choice!=2);
		return 0; 	
}
