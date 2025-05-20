#include "ArrayFunc.h"
#include <iostream>
void fillarr(int mass[], int size) {
	std::cout << "Enter numbers of arr " << std::endl;
	for (size_t i = 0; i < size; i++)
	{
		std::cin >> mass[i];
	}
};
void showArr(int mass[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		std::cout << mass[i] << std::endl;
	}

};
void change(int mass[], int size) {
	int* mass2 = new int[size];
	int index = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (mass[i] % 2 == 0) {
			mass2[index++] = mass[i];
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		if (mass[i] % 2 != 0) {
			mass2[index++] = mass[i];
		}
	}
	for (size_t i = 0; i < size; i++)
	{
		std::cout << (mass[i] = mass2[i]) << std::endl;
	}
	delete[] mass2;
};
void average(int mass[], int size) {
	int averag = 0;
	for (size_t i = 0; i < size; i++)
	{
		 averag += mass[i];

	}

	std::cout << "Average is: " << (averag / size) << std::endl;
};
void mostZust(int  mass[], int size) {
	int maxcount = 0;
	int mostZust = mass[0];

	for (int i = 0; i < size; i++)
	{
		int count = 0;
		for (int  j = 0; j < size; j++) {
			if (mass[j] == mass[i]) {
				count++;
			}
		}
		if (count > maxcount) {
			maxcount = count;
			mostZust = mass[i];
		}
		
	}
	std::cout << "Most zust " << mostZust << std::endl;
	std::cout << "Max count " << maxcount << std::endl;
}
