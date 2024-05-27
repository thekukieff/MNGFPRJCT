#include "First.hpp"
void First()
{

	const int SIZE = 10;
	int arr[SIZE];
	int min = 1000, max = 0;


	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 50 + 1;
		cout << arr[i] << endl;
	}

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > max) {
			max = arr[i];
		}

		else if (arr[i] < min) {
			min = arr[i];



		}
	}
	cout << "min: " << min << endl;
	cout << "max: " << max << endl;
	Start();
}
