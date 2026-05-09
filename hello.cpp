#include <iostream>
#include <limits>
#include <stdexcept>
#include "util.hpp"

/* Macros */
#define ADD(x, y) ((x) + (y))

/* This is a definition */
void function_a() {
	std::cout << "inside function_a()" << std::endl;
}

/* This function throws an error if the arguments exceed char limit size */
void function_throws_error(int c) {
	if (c > std::numeric_limits<unsigned char>::max()) {
		throw std::invalid_argument("function_throws_error argument is too large: Limit is 255");
	}

	std::cout << "Your number is: " << c << std::endl;
}

void function_b(); /* This is a declaration */

int main(void)
{
	my_util::dump_file_content("./hello.cpp");
	std::cout << "hello, world!" << std::endl;
	
	for (int i = 0; i < 10; ++i) {
		std::cout << "hello: " << i << std::endl;
	}

	std::cout << "Enter your age: ";
	int age;
	std::cin >> age;
	std::cout << "You are " << age << " years old!" << std::endl;

	function_a();
	function_b();

	/* Handling exception */
	try
	{
		function_throws_error(256);
	}
	catch(std::invalid_argument& e)
	{
		std::cerr << e.what() << std::endl;
		/* return -1; */
	}

	my_util::math_int math_int;
	int res = math_int.add(2, 4);
	std::cout << "Add result: " << res << std::endl;

	int add_macro = ADD(10, 12);
	PRINT_VAR("add_macro", add_macro);

	int origin = 10;
	PRINT_VAR("Origin", origin);
	my_util::reset_int(&origin);
	PRINT_VAR("Origin after reset_int", origin);
	my_util::mod_int(&origin, 15);
	PRINT_VAR("Origin after mod_int", origin);

	return 0;
}

/* This is a definition */
void function_b() {
	std::cout << "inside function_b()" << std::endl;
}
