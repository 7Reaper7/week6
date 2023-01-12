#include<iostream>
using namespace std;

float totalincome(string, int, int);

main()
{
    int rows, columns;
    string type;
    float total_income;
    cout << "Enter the rows of the room=> ";
    cin >> rows;
    cout << "Enter the columns of the room=> ";
    cin >> columns;
    cout << "Enter the room type=> ";
    cin >> type;

    total_income = totalincome(type,rows,columns);
    cout << total_income;

}

float totalincome(string type, int rows, int columns)
{
    int total_seats;
    float income = 0;
    total_seats = rows * columns;
    
    if(type == "Premiere")
    {
        income = 12.00 * total_seats;
    }
    else if(type == "Normal")
    {
        income = 7.50 * total_seats;
    }
    else if(type == "Discount")
    {
        income = 5.00 * total_seats;
    }
    return income;
}