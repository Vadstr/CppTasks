#include <iostream>

using namespace std;

float roadCoast(float, float, float);

int main()
{
    cout << "Input distance to the village (in km): ";
    float distance;
    cin >> distance;

    cout << "Input fuel cost (per litr): ";
    float fuelCost;
    cin >> fuelCost;

    cout << "Input fuel consumption (litr/100km): ";
    float fuelConsumption;
    cin >> fuelConsumption;

    float oneWayCost = roadCoast(distance, fuelCost, fuelConsumption);

    cout << "The road to the village and back costs " << oneWayCost*2;
}

float roadCoast(float distance, float fuelCost, float fuelConsumption)
{
    return distance * (fuelConsumption / 100) * fuelCost;
}

