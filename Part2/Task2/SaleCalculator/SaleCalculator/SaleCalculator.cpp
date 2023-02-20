#include <iostream>

using namespace std;

float calculateSale(int);
int inputCountOfMoney();

int main()
{
    int purchaseAmount = inputCountOfMoney();
    float finalAmount = calculateSale(purchaseAmount);
    cout << "Final amount: " << finalAmount << endl;
}

int inputCountOfMoney() 
{
    cout << "Enter the purchase amount:";
    int purchaseAmount;
    cin >> purchaseAmount;
    return purchaseAmount;
}

float calculateSale(int purchaseAmount)
{
    float sale500 = 0.03;
    float sale1000 = 0.05;

    if (purchaseAmount < 0)
        cout << "purchase amount cannot be lover than zero";
    else if (purchaseAmount > 1000) {
        cout << "Your sale: " << sale1000 * 100 << "%" << endl;
        return purchaseAmount * (1 - sale1000);
    }
    else if (purchaseAmount > 500) {
        cout << "Your sale: " << sale500 * 100 << "%" << endl;
        return purchaseAmount * (1 - sale500);
    }
    else
        return purchaseAmount;

    return 0;
}