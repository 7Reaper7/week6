#include<iostream>
using namespace std;

char grade(int);

main()
{
    int num;
    char store;
    cout << "Enter your marks=> ";
    cin >> num;

    store = grade(num);
    cout << "your grade is=> " << store;
}

char grade(int num)
{
    char output;
    if(num<50)
    {
        output = 'F';
    }
    else if(num>=50 && num<=60)
    {
        output = 'E';
    }
    else if(num>=61 && num<=70)
    {
        output = 'D';
    }
    else if(num>=71 && num<=80)
    {
        output = 'C';
    }
    else if(num>=81 && num<=85)
    {
        output = 'B';
    }
    else if(num>85 && num<=100)
    {
        output = 'A';
    }
    return output;
}