#include<iostream>
using namespace std;

float calPriceStudio(int, string);
float calPriceApart(int, string);

main()
{
    
    int stay;
    float show, show1;
    string month;
    cout << "Enter the month of the stay(in words)=> ";
    cin >> month;
    cout << "Enter the duration of stay=> ";
    cin >> stay;

    show = calPriceStudio(stay, month);
    show1 = calPriceApart(stay, month);
    
    cout << "Apartment=> " << show1 << "$" << endl;
    cout << "Studio=> " << show << "$";
    
}

float calPriceStudio(int stay, string month)
{
    float send;
    if(month == "May" || month == "October")
    {
        if(stay < 8)
        {
            send = stay * 50;
        }
        else if(stay >= 8 && stay <= 14)
        {
            send = (stay * 50) - ((stay * 50) * 5/100);
        }
        else if(stay >= 15)
        {
            send = (stay * 50) - ((stay * 50) * 30/100);
        }
    }
    else if(month == "June" || month == "September")
    {
        if(stay < 15)
        {
            send = stay * 75.20;
        }
        if(stay >= 15)
        {
            send = (stay * 75.20) - ((stay * 75.20) * 20/100);
        }
    }
    else if(month == "July" || month == "August")
    {
        send = stay * 76;
    }
    return send;
}

float calPriceApart(int stay, string month)
{
    float send;
    if(month == "May" || month == "October")
    {
        send = stay * 65;
    }
    else if(month == "June" || month == "September")
    {
       send = stay * 68.70;
    }
    else if(month == "July" || month == "August")
    {
        send = stay * 77;
    }
    if(stay >=15)
    {
        send = send - (send * 10/100);
    }
    return send;

}