#include <iostream>

using namespace std;

void calculate(int);

int main()
{
    cout << "Input count of even number:";
    int countOfNum;
    cin >> countOfNum;

    calculate(countOfNum);
}

void calculate(int count) 
{
    int sum = 0;
    for (int i = 1; i <= count; i++)
    {
        sum += i * 2;
        cout << i * 2;
        if (i != count)
            cout << " + ";
    }

    cout << " = " << sum << endl;
}