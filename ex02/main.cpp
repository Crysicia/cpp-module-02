#include <iostream>
#include "Fixed.hpp"

std::string boolToString(bool value) {
	if (value) return "true";
	return "false";
}

int main( void ) {
	Fixed a( 1337.20f );
	Fixed b( a );
	Fixed c( -5.0f );
	Fixed d( 42.42f );
	Fixed e( 2022 );

	std::cout << a << " is equal to " << b << " : " << boolToString(a == b) << std::endl;
	std::cout << a << " is equal to " << c << " : " << boolToString(a == c) << std::endl;
	std::cout << a << " is equal to " << d << " : " << boolToString(a == d) << std::endl;
	std::cout << a << " is equal to " << e << " : " << boolToString(a == e) << std::endl << std::endl;

	std::cout << a << " is not equal to " << b << " : " << boolToString(a != b) << std::endl;
	std::cout << a << " is not equal to " << c << " : " << boolToString(a != c) << std::endl;
	std::cout << a << " is not equal to " << d << " : " << boolToString(a != d) << std::endl;
	std::cout << a << " is not equal to " << e << " : " << boolToString(a != e) << std::endl << std::endl;

	std::cout << a << " is greater than " << b << " : " << boolToString(a > b) << std::endl;
	std::cout << a << " is greater than " << c << " : " << boolToString(a > c) << std::endl;
	std::cout << a << " is greater than " << d << " : " << boolToString(a > d) << std::endl;
	std::cout << a << " is greater than " << e << " : " << boolToString(a > e) << std::endl << std::endl;

	std::cout << a << " is lower than " << b << " : " << boolToString(a < b) << std::endl;
	std::cout << a << " is lower than " << c << " : " << boolToString(a < c) << std::endl;
	std::cout << a << " is lower than " << d << " : " << boolToString(a < d) << std::endl;
	std::cout << a << " is lower than " << e << " : " << boolToString(a < e) << std::endl << std::endl;

	std::cout << a << " is greater than or equal to " << b << " : " << boolToString(a >= b) << std::endl;
	std::cout << a << " is greater than or equal to " << c << " : " << boolToString(a >= c) << std::endl;
	std::cout << a << " is greater than or equal to " << d << " : " << boolToString(a >= d) << std::endl;
	std::cout << a << " is greater than or equal to " << e << " : " << boolToString(a >= e) << std::endl << std::endl;

	std::cout << a << " is lower than or equal to " << b << " : " << boolToString(a <= b) << std::endl;
	std::cout << a << " is lower than or equal to " << c << " : " << boolToString(a <= c) << std::endl;
	std::cout << a << " is lower than or equal to " << d << " : " << boolToString(a <= d) << std::endl;
	std::cout << a << " is lower than or equal to " << e << " : " << boolToString(a <= e) << std::endl << std::endl;

	Fixed f;
	Fixed g( 21 );
	Fixed h( 0 );
	Fixed i( 10 );
	Fixed j( -5 );
	Fixed k( 0.5f );

	std::cout << "{" << f << "} Initial value of F" << std::endl;
	std::cout << "{" << ++f << "} Pre increment F" << std::endl;
	std::cout << "{" << f << "} Current value of F" << std::endl;
	std::cout << "{" << f++ << "} Post increment F" << std::endl;
	std::cout << "{" << f << "} Current value of F" << std::endl << std::endl;

	f = 0;
	std::cout << "{" << f << "} Initial value of F" << std::endl;
	std::cout << "{" << --f << "} Pre decrement F" << std::endl;
	std::cout << "{" << f << "} Current value of F" << std::endl;
	std::cout << "{" << f-- << "} Post decrement F" << std::endl;
	std::cout << "{" << f << "} Current value of F" << std::endl << std::endl;

	std::cout << g << " plus " << h << " equal " << (g + h) << std::endl;
	std::cout << g << " plus " << i << " equal " << (g + i) << std::endl;
	std::cout << g << " plus " << j << " equal " << (g + j) << std::endl;
	std::cout << g << " plus " << k << " equal " << (g + k) << std::endl << std::endl;

	std::cout << g << " minus " << h << " equal " << (g - h) << std::endl;
	std::cout << g << " minus " << i << " equal " << (g - i) << std::endl;
	std::cout << g << " minus " << j << " equal " << (g - j) << std::endl;
	std::cout << g << " minus " << k << " equal " << (g - k) << std::endl << std::endl;

	std::cout << g << " times " << h << " equal " << (g * h) << std::endl;
	std::cout << g << " times " << i << " equal " << (g * i) << std::endl;
	std::cout << g << " times " << j << " equal " << (g * j) << std::endl;
	std::cout << g << " times " << k << " equal " << (g * k) << std::endl << std::endl;

	// Disabled due to floating point execption
	// std::cout << g << " divided by " << h << " equal " << (g / h) << std::endl;
	std::cout << g << " divided by " << i << " equal " << (g / i) << std::endl;
	std::cout << g << " divided by " << j << " equal " << (g / j) << std::endl;
	std::cout << g << " divided by " << k << " equal " << (g / k) << std::endl << std::endl;


	std::cout << "Min value between " << g << " and " << h << " : " << Fixed::min(g, h) << std::endl;
	std::cout << "Min value between " << h << " and " << i << " : " << Fixed::min(h, i) << std::endl;
	std::cout << "Min value between " << i << " and " << j << " : " << Fixed::min(i, j) << std::endl;
	std::cout << "Min value between " << j << " and " << k << " : " << Fixed::min(j, k) << std::endl << std::endl;

	std::cout << "Max value between " << g << " and " << h << " : " << Fixed::max(g, h) << std::endl;
	std::cout << "Max value between " << h << " and " << i << " : " << Fixed::max(h, i) << std::endl;
	std::cout << "Max value between " << i << " and " << j << " : " << Fixed::max(i, j) << std::endl;
	std::cout << "Max value between " << j << " and " << k << " : " << Fixed::max(j, k) << std::endl << std::endl;

	return 0;
}
