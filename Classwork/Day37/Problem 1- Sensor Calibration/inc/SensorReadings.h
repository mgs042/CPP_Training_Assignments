#pragma once
#include<array>
#include<initializer_list>
class SensorReadings
{
	std::array<std::array<float, 5>, 3> readings;
	void calibrate();
	float average(std::array<float, 5>);
public:
	SensorReadings(std::array<std::array<float, 5>, 3> arr);
	void display();

};

