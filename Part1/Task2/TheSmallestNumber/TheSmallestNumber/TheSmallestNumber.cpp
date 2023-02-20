#include <iostream>

using namespace std;

int askNumber(int);

int main()
{
    cout << "Input count of number: ";
    int countOfNumber, newNum, smallestNumber;
    cin >> countOfNumber;

    smallestNumber = INT32_MAX;

    for (int i = 0; i < countOfNumber; i++)
    {
        newNum = askNumber(i + 1);
        if (newNum < 0)
        {
            cout << "Pleas don`t write negative numbers" << endl << "Try again!" << endl;
            i--;
        }
        else if (newNum < smallestNumber)
            smallestNumber = newNum;
    }

    cout << "The smallest number is " << smallestNumber;
}

int askNumber(int index) 
{
    cout << "Input number" << index << ": ";
    int num;
    cin >> num;
    return num;
}