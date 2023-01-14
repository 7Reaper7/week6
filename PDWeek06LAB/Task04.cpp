#include<iostream>
using namespace std;

float calBill(int, char, char);

main()
{
    int mins;
    char type, time;
    float cost;
    cout << "Enter which type of customer you are(Regular or Premium)=> ";
    cin >> type;
    cout << "Enter the time of call(day/night)=> ";
    cin >> time;
    cout << "Enter the duration of call in minutes=> ";
    cin >> mins;

    cost = calBill(mins, type, time);

    if(type == 'R' || type == 'r' || type == 'P' || type == 'p' || time == 'D' || time == 'd' || time == 'N' || time == 'n')
    {
        cout << "The charges are=> " << cost << "$";
    }
    else
    {
        cout << "ERROR";
    }

}

float calBill(int mins, char type, char time)
{
    float over_mins, total = 10;
    if((type == 'R' || type == 'r') && mins > 50)
    {
        over_mins = mins - 50;
        total = (over_mins * 0.20) + 10.00;
    }
    else if((type == 'P' || type == 'p') && mins > 75 && (time == 'D' || time == 'd'))
    {   
        over_mins = mins - 75;
        total = (over_mins * 0.10) + 25.00;
    }
    else if((type == 'P' || type == 'p') && mins > 100 && (time == 'N' || time == 'n'))
    {   
        over_mins = mins - 100;
        total = (over_mins * 0.05) + 25.00;
    }
    else if((type == 'P' || type == 'p') && (mins <= 100 || mins <=70))
    {   
        total = 25.00;
    }
    return total;

}