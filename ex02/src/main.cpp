#include <iostream>

int main(void)
{
	std::string		string = "HI THIS IS BRAIN";

	std::string*	stringPTR = &string;

	std::string&	stringREF = string;


	std::cout << "string object address: ";
	std::cout << &string << std::endl;

	std::cout << "pointer to string object: ";
	std::cout << stringPTR << std::endl;

	std::cout << "address of reference to string object:";
	std::cout << &stringREF << std::endl;
}
