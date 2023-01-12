#include<iostream>
using namespace std;

float calTransCost(int, float);
float calculateTicket(int, string);

main()
{
    
    int people;
    float budget, ticket_cost, translessBudget, difference;
    string type;

    cout << "Enter your Budget=> ";
    cin >> budget;
    cout << "Enter your Ticket class=> ";
    cin >> type;
    cout << "Enter the number of People in group=> ";
    cin >> people;

    ticket_cost = calculateTicket(people, type);
    translessBudget = calTransCost(people, budget);

    if(ticket_cost < translessBudget)
    {
        difference = translessBudget - ticket_cost;
        cout << "Yes! You have " << difference << "QR left";
    }
    else if(ticket_cost > translessBudget)
    {
        difference = ticket_cost - translessBudget;
        cout << "Not enough money! You need " << difference << "QR";
    }
    
}

float calculateTicket(int people, string type)
{
    float output;
    if(type == "VIP")
    {
        output = people * 499.99;
    }
    else if(type == "Normal")
    {
        output = people * 249.99;
    }
    return output;
}

float calTransCost(int people, float budget)
{
    float transless;
    if(people>=1 && people<=4)
    {
        transless = budget - (budget * 75/100);
    }
    else if(people>=5 && people<=9)
    {
        transless = budget - (budget * 60/100);
    }
    else if(people>=10 && people<=24)
    {
        transless = budget - (budget * 50/100);
    }
    else if(people>=25 && people<=49)
    {
        transless = budget - (budget * 40/100);
    }
    else if(people>50)
    {
        transless = budget - (budget * 25/100);
    }
    return transless;
}