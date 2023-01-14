#include<iostream>
using namespace std;

string whereisxy(int,int,int);

main()
{
    int h, x_coordinate, y_coordinate;
    string location;
    
    cout << "Enter the value of 'h'=> ";
    cin >> h;
    cout << "Enter the X-Coordinate=> ";
    cin >> x_coordinate;
    cout << "Enter the Y-Coordinate=> ";
    cin >> y_coordinate;

    location = whereisxy(h, x_coordinate, y_coordinate);

    cout << location;

}

string whereisxy(int h, int x, int y)
{
    string send;
    int short_span, mid_span, long_span;

    short_span = h + h;
    mid_span = short_span + h;
    long_span = mid_span + h;

    if((y == 0 && x <= mid_span) || (x == h && y <= mid_span) || (y == h && (x <= h || (x >= short_span && x <= mid_span))))
    {
        send = "Border";
    }
    else if((x < mid_span && (y > 0 && y < h )) || ((y > 0 && y < long_span) && (x > h && x < short_span)))
    {
        send = "Inside";
    }
    else
    {
        send = "Outside";
    }
    return send;
}