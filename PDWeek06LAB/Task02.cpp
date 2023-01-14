#include<iostream>
using namespace std;

string calGrade(float);

main()
{

    float sub1,sub2,sub3,sub4,sub5;
    float total_marks;
    float percentage;
    string name;
    string grade;

    cout << "Enter student Name=> ";
    cin >> name;
    cout << "Enter the marks for English=> ";
    cin >> sub1;
    cout << "Enter the marks for Maths=> ";
    cin >> sub2;
    cout << "Enter the marks for Chemistry=> ";
    cin >> sub3;
    cout << "Enter the marks for Social Science=> ";
    cin >> sub4;
    cout << "Enter the marks for Biology=> ";
    cin >> sub5;

    total_marks = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = (total_marks / 500) * 100;
    grade = calGrade(percentage);

    cout << "Total Marks=> " << total_marks << endl;
    cout << "Percentage=> " << percentage << endl;
    cout << "Grade=> " << grade;
}

string calGrade(float percent)
{
    string send;
    if(percent >= 90 && percent <= 100)
    {
        send = "A+";    
    }
    else if(percent >= 80 && percent < 90)
    {
        send = "A";    
    }
    else if(percent >= 70 && percent < 80)
    {
        send = "B+";    
    }
    else if(percent >= 60 && percent < 70)
    {
        send = "B";    
    }
    else if(percent >= 50 && percent < 60)
    {
        send = "C"; 
    }
    else if(percent >= 40 && percent < 50)
    {
        send = "D";    
    }
    else if(percent < 40)
    {
        send = "F";    
    }
    return send;
}