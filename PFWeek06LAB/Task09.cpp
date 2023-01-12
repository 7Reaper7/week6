#include <iostream>
using namespace std;

float calculatePlay(int, int);

main()
{
    int holidays;
    int travelling_weekends;
    int play;
    int more_play;
    float total_play;
    string year_type;

    cout << "Enter 'Leap' or 'Normal'=> ";
    cin >> year_type;
    cout << "Enter the amount of holidays=> ";
    cin >> holidays;
    cout << "Enter the amount of weakends when travelling=> ";
    cin >> travelling_weekends;

    total_play = calculatePlay(holidays,travelling_weekends);

    if(year_type == "Normal")
    {
        play = total_play;
        cout << play;
    }
    else if(year_type == "Leap")
    {
        more_play = total_play + (total_play * 15/100);
        cout << more_play;
    }

}

float calculatePlay(int holidays, int travelling_weekends)
{
    float remaining_weekends;
    float plays_during_holidays, plays_in_sofia, plays_in_hometown;
    float total_play;
    
    remaining_weekends = 48 - travelling_weekends;
    plays_during_holidays = holidays * 2/3;

    plays_in_sofia = plays_during_holidays + (remaining_weekends * 3/4);
    plays_in_hometown = travelling_weekends;

    total_play = plays_in_sofia + plays_in_hometown; 

    return total_play;
} 