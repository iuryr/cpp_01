#include <iostream> 
#include <fstream>
#include <sstream>
#include <sys/stat.h>

static int replace(std::string file_path, std::string s1, std::string s2)
{
	std::ifstream	input_stream(file_path.c_str()); //trying to open file into input file stream
	if (input_stream.is_open() == true)
	{
		std::cout << "File opened. Proceed with replacement operation." << std::endl;
	}
	else
	{
		std::cout << "Could not open file. Quitting." << std::endl;
		return 1;
	}

	std::stringstream	string_stream; //string stream, default constructor
	string_stream << input_stream.rdbuf(); //reading file contents to string stream
	input_stream.close(); // not needed anymore
	std::string content = string_stream.str(); //populating string object to use its methods

	std::string output_string;
	size_t	pos = 0;
	size_t	prev_pos = 0;

	while (pos != std::string::npos)
	{
		pos = content.find(s1, prev_pos);
		if (pos != std::string::npos)
		{
			output_string.append(content, prev_pos, pos - prev_pos);
			output_string.append(s2);
			prev_pos = pos + s1.length();
		}
	}
	output_string.append(content, prev_pos, std::string::npos);

	std::string output_file_path = file_path + ".replace";
	std::ofstream output_file_stream(output_file_path.c_str(), std::ios_base::trunc);
	if (output_file_stream.is_open() == false)
	{
		std::cout << "Could not open output file. Quitting." << std::endl;
	}
	output_file_stream << output_string;
	output_file_stream.close();

	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: ./replace filepath s1 s2" << std::endl;
		std::cout << "Replaces all filepath's ocurrences of s1 by s2 and outputs to filepath.replace file" << std::endl;
		return 1;
	}

	struct stat pathstat;
	if (stat(argv[1], &pathstat) ==	0)
	{
		if (S_ISDIR(pathstat.st_mode) != 0)
		{
			std::cout << "File is a directory. Quitting." << std::endl;
			return 1;
		}
	}
	else
	{
		std::cout << "Problem verifying input file. Quitting." << std::endl;
		return 1;
	}

	std::string	file_path = argv[1];
	std::string	s1 = argv[2];
	std::string s2 = argv[3];

	if (s1.empty() == true)
	{
		std::cout << "Cannot substitute emptyness by anything. Quitting." << std::endl;
		return 1;
	}

	if (replace(file_path, s1, s2) == 1)
		return 1;

	return 0;
}
