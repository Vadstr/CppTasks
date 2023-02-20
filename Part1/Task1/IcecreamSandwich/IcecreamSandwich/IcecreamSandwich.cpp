#include <iostream>
#include <string>

using namespace std;

bool isIcecreamSandwich(string);

int main()
{
    string sandwich;
    cout << "Write some word: ";
    cin >> sandwich;
    if (isIcecreamSandwich(sandwich))
        cout << sandwich << " is Icecream Sandwich";
    else
        cout << sandwich << " is NOT Icecream Sandwich";
}

bool isIcecreamSandwich(string sandwich)
{
    int sandwichLenght = sandwich.length();
    if (sandwichLenght < 3)
        return false;

    if (sandwich[0] == sandwich[sandwichLenght / 2])
        return false;

    for (int i = 0; i < sandwichLenght/2; i++)
    {
        if (sandwich[i] != sandwich[sandwichLenght - i - 1])
            return false;
    }

    return true;
}