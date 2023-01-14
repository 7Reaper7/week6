#include<iostream>
using namespace std;



main()
{
    int arrival_h, arrival_m, actual_h, actual_m;
    int actual_total;
    int arrival_total;
    int difference;
    int diff_h;
    int diff_m;

    cout << "Enter the hour at which exam starts=> ";
    cin >> actual_h;
    cout << "Enter the mins at which exam starts=> ";
    cin >> actual_m;
    cout << "Enter the hour at which you arrived=> ";
    cin >> arrival_h;
    cout << "Enter the mins at which you arrived=> ";
    cin >> arrival_m;

    actual_total = (actual_h * 3600) + (actual_m * 60);
    arrival_total = (arrival_h * 3600) + (arrival_m * 60);

    difference = actual_total - arrival_total;

    diff_h = difference/3600;
    diff_m = difference/60;
    diff_m = diff_m % 60;
    
    if(difference >= 0)
    {
        if(diff_h == 0 && diff_m > 30)
        {
            cout << "Early" << endl << diff_m << " minutes before the start";
        }
        else if(diff_h == 0 && diff_m <= 30)
        {
            cout << "On time" << endl << diff_m << " minutes before the start";
        }
        else
        {
            cout << "Early" << endl << diff_h << ":" << diff_m << " hours before the start";
        }
    }
    else
    {
        if(diff_h == 0)
        {
            cout << "Late" << endl << abs(diff_m) << " minutes after the start";
        }
        else
        {
            cout << "Late" << endl << abs(diff_h) << ":" << abs(diff_m) << " hours after the start";
        }
    }
}
