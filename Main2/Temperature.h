#pragma once

#include <iostream>

using namespace std;

class Temperature {
	private:
		double temperature;
	public:
		Temperature();
		Temperature(double temp);
		void setTemperature(double temp);
		double getTemperature();
		bool isEthylFreezing();
		bool isEthylBoiling();
		bool isOxygenFreezing();
		bool isOxygenBoiling();
		bool isWaterFreezing();
		bool isWaterBoiling();
		void displayList();
		~Temperature();
};