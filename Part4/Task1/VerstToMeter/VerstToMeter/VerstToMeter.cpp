#include <iostream>

using namespace std;

float _kmInVerst = 1.0668;

float verstToKm(float);
float inputDistance();

int main()
{
	cout << "In Km it`s: " << verstToKm(inputDistance()) << endl;
}

float verstToKm(float distance) 
{
	return distance * _kmInVerst;
}

float inputDistance() 
{
    float distance;

	cout << "Input distance in verst: ";
	cin >> distance;

	return distance;
}