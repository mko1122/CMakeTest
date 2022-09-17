#include <iostream>
#include "dog.h"
#include "operations.h"

int main()
{
	auto value = ((10 <=> 20) > 0);
	std::cout << std::boolalpha;
	std::cout << "value : " << value << std::endl;

	Dog dog1("Flitzy");
	dog1.print_info();

	
	return 0;
}
