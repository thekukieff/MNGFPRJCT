#include "func.hpp"





void Start()
{
	int choose;
	cout << "Выберите задание: " << endl << "1; 2; 3; 0 - Выход"<<endl;
	cin >> choose;
	while (choose < 0||choose > 3)
	{
		cin >> choose;
	}
	if (choose == 1) {
		First();
	}
	else if (choose == 2) {
		Second();
	}
	else if (choose == 3) {
		Third();
	}

}





