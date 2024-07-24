#include <iostream>

int main(void)
{
	std::string		string = "HI THIS IS BRAIN";

	std::string*	stringPTR = &string;

	std::string&	stringREF = string;


	std::cout << "String object address: ";
	std::cout << &string << std::endl;

	std::cout << "Pointer to string object: ";
	std::cout << stringPTR << std::endl;
	std::cout << "Showing content through the pointer: ";
	std::cout << *stringPTR << std::endl;

	std::cout << "Address of reference to string object:";
	std::cout << &stringREF << std::endl;
	std::cout << "Showing content through the reference: ";
	std::cout << stringREF << std::endl;
}
