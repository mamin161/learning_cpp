#pragma once

#define PRINT_VAR(name, var)\
	std::cout << name << ": " << var << std::endl;\

namespace my_util
{
	class math_int
	{
		public:
			int add(int, int);
	};

	void reset_int(int *a);
	void mod_int(int *a, int n);

	void dump_file_content(const char* filepath);
}
