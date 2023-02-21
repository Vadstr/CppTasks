#include <iostream>

using namespace std;

int convertTimeToSecond(float);
float secondsToHour(int);
float meterToKm(int);

int main()
{
    cout << "Input distance (m): ";
    int distance;
    cin >> distance;

    cout << "Input time (minute.second): ";
    float time;
    cin >> time;
    int timeInSecond = convertTimeToSecond(time);
    cout << "Speed of runner: " << meterToKm(distance) / secondsToHour(timeInSecond) << " (Km/H)" << endl;
}

int convertTimeToSecond(float time) 
{
    int timeInSecond = 0;
    for (int i = time; i > 0;)
    {
        if (time >= 1)
            timeInSecond += 60;
        else 
        {
            timeInSecond += time * 100;
            break;
        }
        time--;
    }
    return timeInSecond;
}

float secondsToHour(int seconds) 
{
    return seconds / 3600.0;      //3600 - count of seconds in hour
}

float meterToKm(int meter) 
{
    return meter / 1000;        //1000 - count of meter in Km
}
