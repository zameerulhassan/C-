////this example give sum of all natural number till number entered by user

#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>

#include <iostream>

using namespace std;

int main() {

    int x = 0;
    cout<<"Please enter a number";
    cin>>x;
    switch(x){
        case 1:
            cout << "x is 1\n";
            break;
        case 2:
            cout << "x is 2\n";
            break; 
		case 3:
            cout << "x is 3\n";
            break;	   
        case 4:
        case 5:
            cout << "x is 4 or 5";
            break;
        default:
            cout << "x is greater than 5 ";
    }

    return 0;
}
