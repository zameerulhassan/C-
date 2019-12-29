////this example creates a file called myfile.txt
//and adds some text message to it
#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cctype>
#include<iomanip>
#include <cmath>
using namespace std;
int main()
{
ofstream MyFile("myfile.txt");
MyFile<<"This is some test message";
MyFile.close();

return 0;
}

