#include<iostream>
using namespace std;

main()
{
    string temp, humid;
    cout << "Enter the temperature=> ";
    cin >> temp;
    cout << "Enter the humidity=> ";
    cin >> humid;

    if(temp == "warm" && humid == "dry")
    {
        cout << "Play tennis.";
    }
    else if(temp == "warm" && humid == "humid")
    {
        cout << "swim.";
    }
    else if(temp == "cold" && humid == "dry")
    {
        cout << "Play basketball.";
    }
    else if(temp == "cold" && humid == "humid")
    {
        cout << "Watch tv.";
    }
}