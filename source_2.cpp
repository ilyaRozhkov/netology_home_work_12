#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, ".UTF8");
	std::ifstream fin("in.txt");
	int s;
	int size;

	if (fin.is_open()) {

		fin >> size;
		int* arr = new int[size];
			for (int i = 0; i < size; i++) {
				fin >> s;
				arr[i] = s;
		}
			for (int i = size-1; i >= 0; i--) {
				std::cout << arr[i]<< " ";
			}

	}
	else {
		std::cout << "Не удалось открыть файл";
		return 1;
	}

	return 0;
}
