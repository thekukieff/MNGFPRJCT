#include "Second.hpp"

void Second()
{
	srand(time(NULL));

	const int SIZE_2 = 10;
	int arr_2[SIZE_2];
	int start, end, number, sum = 0;
	cout << "������� ������ ��������� [0;9]: ";
	cin >> start;
	cout << "������� ����� ���������: ";
	cin >> end;
	cout << "������� �����: ";
	cin >> number;

	for (int i = 0; i < SIZE_2; i++)
	{
		arr_2[i] = rand() % 50 + 1;
		cout << arr_2[i] << endl;
	}

	for (int i = start; i <= end; i++)
	{
		if (arr_2[i] < number) {
			sum += arr_2[i];


		}


	}
	cout << "����� ����� " << sum << endl;
	Start();

}
