#include<SensorReadings.h>
#include<initializer_list>
#include<iostream>

SensorReadings::SensorReadings(std::array<std::array<float, 5>, 3> arr) {

	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 5; ++j) {
			readings.at(i).at(j) = arr[i][j];
		}
	}
}

void SensorReadings::calibrate() {
	for (float& j : readings.at(0)) {
		j += 0.5f;
	}
	for (float& j : readings.at(1)) {
		j -= 0.3f;
	}
	for (float& j : readings.at(2)) {
		j += 1.2f;
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 5; ++j) {
			std::cout<<readings.at(i).at(j) <<" ";
		}
		std::cout << std::endl;
	}
}

float SensorReadings::average(std::array<float, 5> arr) {
	float sum = 0;
	for (float j : arr) {
		sum += j;
	}
	return sum / 5;
}

void SensorReadings::display() {
	calibrate();
	std::cout << "Sensor 1 Average (calibrated): " << average(readings.at(0)) << std::endl;
	std::cout << "Sensor 2 Average (calibrated): " << average(readings.at(1)) << std::endl;
	std::cout << "Sensor 3 Average (calibrated): " << average(readings.at(2)) << std::endl;

}