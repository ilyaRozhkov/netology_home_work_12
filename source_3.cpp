#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>


int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int size;
	std::ofstream fout("out.txt");

	std::cout << "Введите размер массива: ";

	std::cin >> size;
	if (size <= 0) {
		std::cout << "Размер массива должен быть больше нуля";
	}
	int* arr = new int[size];

	fout << size << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << std::endl << "arr[" << i << "] = ";
		std::cin >> arr[i];
	}
	for (int i = 0; i < size; i++) {
		fout << arr[i] << " ";
	}
	fout.close();
	delete[] arr;

	return 0;
}
