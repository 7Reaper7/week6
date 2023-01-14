#include<iostream>
using namespace std;

float calPrice(string, string, float);

main()
{
    string fruit;
    string day;
    float total;
    float quantity;
     
    cout << "Enter the fruit name=> ";
    cin >> fruit;
    cout << "Enter the day=> ";
    cin >> day;
    cout << "Enter the quantity=> ";
    cin >> quantity;
    
    if((day == "sunday" || day == "saturday"  || day == "monday"  || day == "tuesday"  || day == "thursday"  || day == "friday")
    && (fruit == "banana" || fruit == "apple" || fruit == "pineapple" || fruit == "kiwi" || fruit == "orange" || fruit == "grapes" || fruit == "grapefruit"))
    {
        total = calPrice(fruit, day, quantity);
        cout << total;
    }
    else
    {
        cout << "ERROR";
    }
}

float calPrice(string f, string d, float q)
{
    float send;
    if(f == "banana")
    {
        if(d == "sunday" || d == "saturday")
        {
            send = q * 2.70;
        }
        else
        {
            send = q * 2.50;
        }
    }
    else if(f == "apple")
    {
        if(d == "sunday" || d == "saturday")
        {
            send = q * 1.25;
        }
        else
        {
            send = q * 1.20;
        }
    }
    else if(f == "orange")
    {
        if(d == "sunday" || d == "saturday")
        {
            send = q * 0.90;
        }
        else
        {
            send = q * 0.85;
        }
    }
    else if(f == "grapefruit")
    {
        if(d == "sunday" || d == "saturday")
        {
            send = q * 1.60;
        }
        else
        {
            send = q * 1.45;
        }
    }
    else if(f == "kiwi")
    {
        if(d == "sunday" || d == "saturday")
        {
            send = q * 3.00;
        }
        else
        {
            send = q * 2.70;
        }
    }
    else if(f == "pineapple")
    {
        if(d == "sunday" || d == "saturday")
        {
            send = q * 5.60;
        }
        else
        {
            send = q * 5.50;
        }
    }
    else if(f == "grapes")
    {
        if(d == "sunday" || d == "saturday")
        {
            send = q * 4.20;
        }
        else
        {
            send = q * 3.85;
        }
    }
    return send;
    
}