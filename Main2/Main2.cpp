#include "stdafx.h"
#include "Temperature.h"
#include <cstdlib>

int main() {
	double t;
	cout << "Please Enter the Temperature: ";
	cin >> t;

	Temperature *temperature1 = new Temperature(t);
	temperature1->displayList();
	delete temperature1;

	system("pause");
    return 0;
}