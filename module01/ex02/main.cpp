#include <iostream>

int	main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "str address: " << &str << "\n";
	std::cout << "PTR address: " << stringPTR << "\n";
	std::cout << "REF address: " << &stringREF << "\n";

	std::cout << "str value: " << str << "\n";
	std::cout << "PTR value: " << *stringPTR << "\n";
	std::cout << "REF value: " << stringREF << "\n"; 
}