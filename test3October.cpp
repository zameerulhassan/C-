/*This Program displays a number in magnified form. 
You may enter any number between 0 - 9, as many times as you want*/

#include<iostream>
using namespace std;
void welcome(); // all the functions are void, as per assignment requirements.
void magnify0();
void magnify1();
void magnify2();
void magnify3();
void magnify4();
void magnify5();
void magnify6();
void magnify7();
void magnify8();
void magnify9();
void magnifyX();
char number;
int choice;
int main()

{
welcome();
do
{
cout<<"Please enter number to magnify (0-9): \n";
cin>>number;
cout<<"Here is the number\n";

if (number=='0')
{
magnify0();	
}
else if (number=='1')	
{
magnify1();	
}
else if (number=='2')
{
magnify2();	
}
else if (number=='3')
{
magnify3();	
}
else if (number=='4')
{
magnify4();	
}
else if (number=='5')
{
magnify5();	
}
else if (number=='6')
{
magnify6();	
}
else if (number=='7')
{
magnify7();	
}
else if (number=='8')
{
magnify8();	
}
else if (number=='9')
{
magnify9();	
}
else 
magnifyX();

cout<<"Do you want to magnify anotehr number?\n";
cout<<"Enter '1' for Yes & '2' for No\n";
cin>>choice;
}
while (number==1);

if (number!=true)
{
cout<<"I don't know to magnify this!'\n";
cout<<"Some day, yes, I shall do it.\n";	
}


}
void welcome()
{
	cout<<"******************************************\n";
	cout<<"Welcome To My Program\n";
	cout<<"This Program Magnifies Numbers from 0 to 9\n";
	cout<<"******************************************\n";

	cout<<endl;
	cout<<endl;
}

void magnify0()
{
				cout<<endl;
				cout<<endl;

	cout<<"      00   \n";
	cout<<"     0  0 \n";
	cout<<"    0    0 \n";
	cout<<"   0      0 \n";
	cout<<"    0    0 \n";
	cout<<"     0  0 \n";
	cout<<"      00   \n";
	
	
				cout<<endl;
				cout<<endl;
	return;
}
void magnify1()
{
					cout<<endl;
					cout<<endl;
cout<<"    111\n";
cout<<"   1111\n";
cout<<"     11\n";
cout<<"     11\n";
cout<<"     11\n";
cout<<"     11\n";
cout<<"    1111\n";

				cout<<endl;
				cout<<endl;

}
void magnify2()
{
				cout<<endl;
				cout<<endl;

cout<<"    222222\n";
cout<<"        22\n";
cout<<"       22\n";
cout<<"      22\n";
cout<<"     22\n";
cout<<"    22\n";
cout<<"    222222\n";

				cout<<endl;
				cout<<endl;
}
void magnify3()
{
				cout<<endl;
				cout<<endl;
cout<<"    333333\n";
cout<<"       33\n";
cout<<"     33\n";
cout<<"    33\n";
cout<<"     33\n";
cout<<"       33\n";
cout<<"    333333\n";

				cout<<endl;
				cout<<endl;
}
void magnify4()
{
				cout<<endl;
				cout<<endl;
cout<<"    44     44\n";
cout<<"    44     44\n";
cout<<"    44     44\n";
cout<<"    44444444444\n";
cout<<"           44\n";
cout<<"           44\n";
cout<<"           44\n";

				cout<<endl;
				cout<<endl;

}

void magnify5()
{
	
				cout<<endl;
				cout<<endl;
cout<<"    555555555\n";
cout<<"    55       \n";
cout<<"    55       \n";
cout<<"    555555555\n";
cout<<"           55\n";
cout<<"           55\n";
cout<<"    555555555\n";

				cout<<endl;
				cout<<endl;
}

void magnify6()
{
				cout<<endl;
				cout<<endl;
	
cout<<"    666666666\n";
cout<<"    66       \n";
cout<<"    66       \n";
cout<<"    666666666\n";
cout<<"    66     66\n";
cout<<"    66     66\n";
cout<<"    666666666\n";

				cout<<endl;
				cout<<endl;

}

void magnify7()
{
				cout<<endl;
				cout<<endl;
cout<<"    777777777\n";
cout<<"          77\n";
cout<<"         77\n";
cout<<"        77\n";
cout<<"       77\n";
cout<<"      77\n";
cout<<"    77\n";

				cout<<endl;
				cout<<endl;

}

void magnify8()
{
				cout<<endl;
				cout<<endl;
cout<<"    888888888\n";
cout<<"    88     88\n";
cout<<"    88     88\n";
cout<<"    888888888\n";
cout<<"    88     88\n";
cout<<"    88     88\n";
cout<<"    888888888\n";

				cout<<endl;
				cout<<endl;

}
void magnify9()
{
	
				cout<<endl;
				cout<<endl;
cout<<"    999999999\n";
cout<<"    99     99\n";
cout<<"    99     99\n";
cout<<"    999999999\n";
cout<<"           99\n";
cout<<"           99\n";
cout<<"    999999999\n";

				cout<<endl;
				cout<<endl;

}

void magnifyX()

{
				cout<<endl;
				cout<<endl;
cout<<"I don't know how to magnify this";
return; 	
}







