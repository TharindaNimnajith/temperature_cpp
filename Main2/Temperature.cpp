#include "stdafx.h"
#include "Temperature.h"

Temperature::Temperature() {
	temperature = 0;
}

Temperature::Temperature(double temp) {
	temperature = temp;
}

void Temperature::setTemperature(double temp) {
	temperature = temp;
}

double Temperature::getTemperature() {
	return temperature;
}

bool Temperature::isEthylFreezing() {
	if (temperature <= -173)
		return true;
	else
		return false;
}

bool Temperature::isEthylBoiling() {
	if (temperature >= 172)
		return true;
	else
		return false;
}

bool Temperature::isOxygenFreezing() {
	if (temperature <= -362)
		return true;
	else
		return false;
}

bool Temperature::isOxygenBoiling() {
	if (temperature >= -306)
		return true;
	else
		return false;
}

bool Temperature::isWaterFreezing() {
	if (temperature <= 32)
		return true;
	else
		return false;
}

bool Temperature::isWaterBoiling() {
	if (temperature >= 212)
		return true;
	else
		return false;
}

void Temperature::displayList() {
	cout << endl;

	if (isEthylFreezing() == true)
		cout << "Ethyl Alcohol will Freeze" << endl;

	if (isEthylBoiling() == true)
		cout << "Ethyl Alcohol will Boil" << endl;

	if (isOxygenFreezing() == true)
		cout << "Oxygen will Freeze" << endl;

	if (isOxygenBoiling() == true)
		cout << "Oxygen will Boil" << endl;

	if (isWaterFreezing() == true)
		cout << "Water will Freeze" << endl;

	if (isWaterBoiling() == true)
		cout << "Water will Boil" << endl;

	cout << endl;
}

Temperature::~Temperature() {
	//Destructor runs
}