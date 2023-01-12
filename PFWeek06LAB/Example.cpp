#include<iostream>
using namespace std;

int isgreater(int,int,int);

main()
{
    int num1,num2,num3;
    int store;
    cout << "Enter a number=> ";
    cin >> num1;
    cout << "Enter another number=> ";
    cin >> num2;
    cout << "Enter another number=> ";
    cin >> num3;

    store = isgreater(num1, num2, num3);
    cout << store << " is the greatest.";
}

int isgreater(int n1,int n2,int n3)
{
    int output;
    if(n1>n2 && n1>n3)
    {
        output = n1;
    }
    else if(n2>n1 && n2>n3)
    {
        output = n2;
    }
    else if(n3>n1 && n3>n2)
    {
        output = n3;
    }
    return output = n1;
}