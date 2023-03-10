#include <iostream>
#include <vector>

using namespace std;

vector<int> combineArray(vector<int> arr1, vector<int> arr2);
void bubbleSort(vector<int>& arr);
void writeArray(vector<int> arr);

int main()
{
	vector<int> arr1 = { 1, 3, 23, 56, 6, 76 };
    vector<int> arr2 = { 35, 86, 23, 7, 2, 9, 10};

	cout << "First array befor sorting: ";
	writeArray(arr1);
	bubbleSort(arr1);
	cout << "First array after sorting: ";
	writeArray(arr1);

	cout << endl;

	cout << "Second array befor sorting: ";
	writeArray(arr2);
	bubbleSort(arr2);
	cout << "Second array after sorting: ";
	writeArray(arr2);

	auto result = combineArray(arr1, arr2);
	writeArray(result);
}

vector<int> combineArray(vector<int> arr1, vector<int> arr2)
{
	vector<int> result;
	int firstArrayIndex = 0;
	int secondArrayIndex = 0;
	for (int i = 0; i < arr1.size() + arr2.size(); i++)
	{
		if (arr1.size() == firstArrayIndex + 1) {
			for (secondArrayIndex; secondArrayIndex < arr2.size(); secondArrayIndex++)
				result.push_back(arr2[secondArrayIndex]);
			break;
		}
		else if (arr2.size() == secondArrayIndex + 1) {
			for (firstArrayIndex; firstArrayIndex < arr1.size(); firstArrayIndex++)
				result.push_back(arr1[firstArrayIndex]);
			break;
		}
		else {
			arr1[firstArrayIndex] < arr2[secondArrayIndex] ? 
				result.push_back(arr1[firstArrayIndex++]) : 
				result.push_back(arr2[secondArrayIndex++]);
		}
	}

	return result;
}

void bubbleSort(vector<int> &arr) 
{
	for (int j = 1; j < arr.size() - 1; j++)
	{
		bool swaped = false;
		for (int i = 0; i < arr.size() - j; i++)
		{
			if (arr[i] > arr[i + 1]) {
				swap(arr[i], arr[i + 1]);
				swaped = true;
			}
		}
		if (!swaped)
			break;
	}
}

void writeArray(vector<int> arr)
{
	for (int index = 0; index < arr.size(); ++index)
		cout << arr[index] << ' ';
	cout << endl;
}