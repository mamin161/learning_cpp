#include "util.hpp"
#include <iostream>
#include <fstream>
#include <string>

int my_util::math_int::add(int a, int b)
{
	return a + b;
}

void my_util::reset_int(int *a)
{
	*a = 0;
}

void my_util::mod_int(int *a, int n)
{
	*a = n;
}

/**
 * Reading from a file example
 * */
void my_util::dump_file_content(const char* filepath)
{
	std::cout << "[Dumping " << filepath << "]" << std::endl;
	std::ifstream file;
	file.open(filepath);
	std::string line;
	if (file.is_open()) {
		while (std::getline(file, line)) {
			std::cout << line << std::endl;
		}
		file.close();
	} else {
		std::cout << "Unable to open file" << std::endl;
	}
}
