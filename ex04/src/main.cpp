#include <iostream>
#include <fstream>
#include <sstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace filepath s1 s2" << std::endl;
		std::cout << "Replaces all filepath's ocurrences of s1 by s2 and outputs to filepath.replace file" << std::endl;
		return 1;
	}

	std::string	file_path = argv[1];

	std::ifstream	input_stream(file_path.c_str()); //file stream
	if (input_stream.is_open() == true)
	{
		std::cout << "File opened. Proceed with replacement operation." << std::endl;
	}
	else
	{
		std::cout << "Could not open file. Quitting." << std::endl;
		return 1;
	}

	std::stringstream	string_stream; //string stream 
	string_stream << input_stream.rdbuf(); //reading file contents to string stream

	std::string content = string_stream.str(); //populating string object to use its methods

	std::cout << content << std::endl;
}
