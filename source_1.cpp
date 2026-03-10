#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

int main(int argc, char** argv)
{
	setlocale(LC_ALL, ".UTF8");
	std::ifstream fin("in.txt");
	std::string s;

	if (fin.is_open()) {
		while (!(fin >> s).eof())
		{
			std::cout << s << std::endl;
		}
		fin.close();
	}
	else {
		std::cout << "Не удалось открыть файл";
		return 1;
	}

	return 0;
}
