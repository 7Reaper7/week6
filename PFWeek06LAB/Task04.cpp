#include<iostream>
using namespace std;

string checkspeed(float);

main()
{
    float speed;
    string state;
    cout << "Enter your speed=> ";
    cin >> speed;

    state = checkspeed(speed);
    cout << state;
}

string checkspeed(float speed)
{
    string output;
    if(speed<=10)
    {
        output = "Slow";
    }
    else if(speed>10 && speed<=50)
    {
        output = "Average";
    }
    else if(speed>50 && speed<=150)
    {
        output = "Fast";
    }
    else if(speed>150 && speed<=1000)
    {
        output = "Ultra-fast";
    }
    else if(speed>1000)
    {
        output = "Extremely fast";
    }
    return output;
}


