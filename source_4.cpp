#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, ".UTF8");
	std::ifstream fin("in.txt");
	int cols, rows, value;

	if (fin.is_open()) {

		fin >> rows;
		fin >> cols;
		int** arr = new int* [rows];

		for (int i = 0; i < rows; i++) {
			arr[i] = new int[cols];
		}
		for (int i = 0; i < rows; i++) {
				for (int j = cols - 1; j >= 0; j--) {
				fin >> value;
				arr[i][j] = value;
			}
		}

		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) {
				std::cout << arr[i][j] << " ";
			}
			std::cout << std::endl;
		}
		fin.close();
		for (int i = 0; i < rows; i++) {
		}
		delete[] arr;
	}
	else {
		std::cout << "Не удалось открыть файл";
		return 1;
	}

	return 0;
}
