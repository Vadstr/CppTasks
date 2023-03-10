#include <iostream>
#include <vector>

using namespace std;

int askArrayCount();
void askArray(int count, vector<float> &arr);
float minValue(vector<float> arr);
float maxValue(vector<float> arr);
float avgOfArr(vector<float> arr);


int main()
{
    int count = askArrayCount();
    vector<float> arr;

    askArray(count, arr);

    cout << minValue(arr) << endl << maxValue(arr) << endl << avgOfArr(arr);
}

int askArrayCount() 
{
    int count;
    while (true) {
        cout << "Input array count: ";
        cin >> count;
        if (count <= 0)
            continue;

        break;
    }
    return count;
}

void askArray(int count, vector<float> &arr)
{
    cout << "Input array values: ";
    for (int i = 0; i < count; i++)
    {
        float temp;
        cin >> temp;
        arr.push_back(temp);
    }
}

float minValue(vector<float> arr) 
{
    float minValue = 0;
    for (float num : arr)
    {
        if (num < minValue || minValue == 0) 
        {
            minValue = num;
        }
    }

    return minValue;
}

float maxValue(vector<float> arr)
{
    float maxValue = 0;
    for (float num : arr)
    {
        if (num > maxValue || maxValue == 0)
        {
            maxValue = num;
        }
    }

    return maxValue;
}

float avgOfArr(vector<float> arr) 
{
    float avg = 0;
    for (float num : arr)
    {
        avg += num;
    }

    return avg / arr.size();
}