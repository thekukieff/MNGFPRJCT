#include "func.hpp"

void Third()
{
	const int SIZE_3 = 13;
	int year[SIZE_3];
	int start_3, end_3, max_3 = 0, min_3;
	year[0] = 0;


	cout << "������� ������� �� ��� �� �������, ������� � ������ " << endl;
	for (int i = 1; i < SIZE_3; i++)
	{
		cin >> year[i];



	}

	cout << "������� �������� ������� (�� � �� ������������): ";
	cin >> start_3;
	cin >> end_3;

	min_3 = year[end_3];
	for (int i = start_3; i <= end_3; i++)
	{
		if (max_3 < year[i]) {
			max_3 = year[i];


		}
		if (min_3 > year[i]) {
			min_3 = year[i];


		}




	}

	cout << "Min: " << min_3;
	cout << "Max: " << max_3;

}