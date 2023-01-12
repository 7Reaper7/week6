#include<iostream>
using namespace std;

float discount(float, string, string);

main()
{
    float price;
    float result;
    string month, day;

    cout << "Enter the price=> ";
    cin >> price;
    cout << "Enter the day=> ";
    cin >> day;
    cout << "Enter the month=> ";
    cin >> month;

    result = discount(price,month,day);
    cout << "Your payable amount is=> " << result;
}

float discount(float price, string month, string day)
{
    int discounted = price;
    if(day == "sunday")
    {
        if(month == "march" || month == "october" || month == "august")
        {
            discounted = price - (price * 10/100);
        }
    }
    else if(day == "monday")
    {
        if(month == "november" || month == "december")
        {
            discounted = price - (price * 5/100);
        }
    }
    return discounted;
}
