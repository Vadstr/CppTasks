#include <iostream>
#include <string>

using namespace std;

int askNumber();
void whatTheSeason(int);

int main()
{
    int mounthIndex = askNumber();
    
    if (mounthIndex > 0 && mounthIndex < 13)
        whatTheSeason(mounthIndex);
    else
        cout << "Incorect mounth index";
}

int askNumber() 
{
    cout << "Input the number of mounth:";
    int number;
    cin >> number;
    return number;
}

void whatTheSeason(int mounthIndex) 
{
    string season;
    if (mounthIndex < 3 || mounthIndex > 11)
        season = "winter";
    else if (mounthIndex < 6)
        season = "spring";
    else if (mounthIndex < 9)
        season = "summer";
    else
        season = "autumn";

    cout << season;
}