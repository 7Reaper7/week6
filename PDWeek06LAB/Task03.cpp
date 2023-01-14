#include<iostream>
using namespace std;

string showsign(int, string);

main()
{
    int date;
    string month;
    string symbol;
    cout << "Enter the date of your birth=> ";
    cin >> date;
    cout << "Enter the month of your birth=> ";
    cin >> month;

    symbol = showsign(date, month);
    if(symbol == "Bearer")
    {
        cout << "Your Zodiac Symbol is=> The Water " << symbol;
    }
    else
    {
        cout << "Your Zodiac Symbol is=> The " << symbol;
    }

}

string showsign(int date, string month)
{
    string sign;
    if((month == "March" && date >= 21) || (month == "April" && date <= 19))
    {
        sign = "Ram";
    }
    else if((month == "April" && date >= 20) || (month == "May" && date <= 20))
    {
        sign = "Bull";
    }
    else if((month == "May" && date >= 21) || (month == "June" && date <= 20))
    {
        sign = "Twins";
    }
    else if((month == "June" && date >= 21) || (month == "July" && date <= 22))
    {
        sign = "Crab";
    }
    else if((month == "July" && date >= 23) || (month == "August" && date <= 22))
    {
        sign = "Lion";
    }
    else if((month == "August" && date >= 23) || (month == "September" && date <= 22))
    {
        sign = "Virgin";
    }
    else if((month == "September" && date >= 23) || (month == "October" && date <= 22))
    {
        sign = "Scales";
    }
    else if((month == "October" && date >= 23) || (month == "November" && date <= 21))
    {
        sign = "Scorpion";
    }
    else if((month == "November" && date >= 22) || (month == "December" && date <= 21))
    {
        sign = "Archer";
    }
    else if((month == "December" && date >= 22) || (month == "January" && date <= 19))
    {
        sign = "Goat";
    }
    else if((month == "January" && date >= 20) || (month == "February" && date <= 18))
    {
        sign = "Bearer";
    }
    else if((month == "February" && date >= 19) || (month == "March" && date <= 20))
    {
        sign = "Fishes";
    }

    return sign;
}