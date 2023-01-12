#include<iostream>
using namespace std;

float totalprice(int, string, string);

main()
{
    
    int quantity;
    float output;
    string city, product;

    cout << "Enter the Product=> ";
    cin >> product;
    cout << "Enter the City=> ";
    cin >> city;
    cout << "Enter the Quantity=> ";
    cin >> quantity;

    output = totalprice(quantity, city, product);
    cout << output;

}

float totalprice(int quantity, string city, string product)
{
    float total;
    if(product == "coffee")
    {
        if(city == "sofia")
        {
            total = quantity * 0.50;
        }
        else if(city == "plovdiv")
        {
            total = quantity * 0.40;
        }
        else if(city == "varna")
        {
            total = quantity * 0.45;
        }
    }
    else if(product == "water")
    {
        if(city == "sofia")
        {
            total = quantity * 0.80;
        }
        else if(city == "plovdiv")
        {
            total = quantity * 0.70;
        }
        else if(city == "varna")
        {
            total = quantity * 0.70;
        }
    }
    else if(product == "beer")
    {
        if(city == "sofia")
        {
            total = quantity * 1.20;
        }
        else if(city == "plovdiv")
        {
            total = quantity * 1.15;
        }
        else if(city == "varna")
        {
            total = quantity * 1.10;
        }
    }
    else if(product == "sweets")
    {
        if(city == "sofia")
        {
            total = quantity * 1.45;
        }
        else if(city == "plovdiv")
        {
            total = quantity * 1.30;
        }
        else if(city == "varna")
        {
            total = quantity * 1.35;
        }
    }
    else if(product == "peanuts")
    {
        if(city == "sofia")
        {
            total = quantity * 1.60;
        }
        else if(city == "plovdiv")
        {
            total = quantity * 1.50;
        }
        else if(city == "varna")
        {
            total = quantity * 1.55;
        }
    }
    return total;
}
