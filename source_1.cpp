#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, ".UTF8");
	std::ifstream fin("in.txt");
	std::string word;

	if (fin.is_open()) {
		while (fin >> word)
		{
			std::cout << word << std::endl;
		}
		fin.close();
	}
	else {
		std::cout << "Не удалось открыть файл";
		return 1;
	}

	return 0;
}
