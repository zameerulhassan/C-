#include<iostream>
using namespace std;
main()
{
    int a,b,number,factorial;
    factorial=1;
    char ch;
    cout<<"Enter first digit=";
    cin>>a;
    cout<<"Enter the second digit=";
    cin>>b;
    cout<<"Enter your choice\n\nFor addition Enter a\nFor subtraction Enter s\nFor multiplication Enter m\nFor division Enter d\nFor factorial type f";
    cout<<"\n\nEnter your choice=";
    cin>>ch;
    if(ch=='a')
    {
        cout<<"\n\nAddition of two numbers is="<<a+b;
    }
    if(ch=='s')
     {
         cout<<"\n\nsubtraction of two numbers is="<<a-b;
     }
     if(ch=='m')
     {
         cout<<"\n\nmultipliction of two numbers is="<<a*b;
     }
    if(ch=='d')
    {
        cout<<"\n\nsubtraction of two numbers is="<<a/b;
    }
    if(ch=='f')
    {
        cout<<"Enter the number for factorial measure=";
        cin>>number;
        while(number>=1)
        {
            factorial=factorial*number;
            number=number-1;
        }
        cout<<"your Factorial of number is="<<factorial;
        
    }
}
