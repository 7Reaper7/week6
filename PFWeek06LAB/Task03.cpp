#include<iostream>
using namespace std;

string checktitle(int, char);

main()
{
    int age;
    char gender;
    string title;

    cout << "Enter your age=> ";
    cin >> age;
    cout << "Enter your gender=> ";
    cin >> gender;

    title = checktitle(age,gender);
    cout << "Your title is=> " << title;
}

string checktitle(int age, char gender)
{
    string output;
    if(age<16 && gender == 'm')
    {
        output = "Master";
    }
    else if(age>16 && gender == 'm')
    {
        output = "Mr.";
    }
    else if(age<16 && gender == 'f')
    {
        output = "Miss";
    }
    else if(age<16 && gender == 'f')
    {
        output = "Ms.";
    }
    return output;
}
