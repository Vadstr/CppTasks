#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int getRandomNumber(int,int);

int main()
{
    int minValue = 100, maxValue = 999;
    int num, wrongPlace, correct;
    num = getRandomNumber(minValue, maxValue);
    string randNum = to_string(num);
    cout << "Try to guess the number" << endl;
    while (true)
    {
        wrongPlace = 0;
        correct = 0;
        cout << "Your variant: ";
        string guessNum;
        cin >> guessNum;
        if (guessNum.length() != 3)
        {
            continue;
        }

        for (int i = 0; i < guessNum.length(); i++)
            for (int j = 0; j < randNum.length(); j++)
                if (guessNum[i] == randNum[j])
                    if (i == j)
                        correct++;
                    else
                        wrongPlace++;
        
        if (correct == 3)
            break;

        cout << "Guessed: " << (wrongPlace + correct) << "\tOn right place: " << correct << endl;
    }
    cout << "Congratulation! It`s correct";
}

int getRandomNumber(int min, int max)
{
    srand(time(NULL));
    int num = min + rand() % (max - min + 1);

    return num;
}