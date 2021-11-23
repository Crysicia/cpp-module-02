#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b( a );
	Fixed c;
	Fixed d(42.42f);
	Fixed e(-1);

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << d.getRawBits() << std::endl;
	std::cout << e.getRawBits() << std::endl;

	std::cout << d << std::endl;
	std::cout << e << std::endl;

	std::cout << d.toInt() << std::endl;
	std::cout << e.toInt() << std::endl;
	return 0;
}
