#include<iostream>
using namespace std;

float fair(string, int);

main()
{
    
    int kilometers;
    float result;
    string time;
    cout << "Enter kilometers=> ";
    cin >> kilometers;
    cout << "Enter time=> ";
    cin >> time;

    result = fair(time, kilometers);
    cout << result;

}

float fair(string time, int kilometers)
{
    float output;

    if(kilometers>=100)
    {
        output = kilometers * 0.06;
    }
    else if(kilometers>=20 && kilometers<100)
    {
        output = kilometers * 0.09;
    }
    else
    {
        if(time == "day")
        {
            output = kilometers * 0.79 + 0.70;
        }
        if(time == "night")
        {
            output = kilometers * 0.90 + 0.70;
        }
    }
    return output;
}
