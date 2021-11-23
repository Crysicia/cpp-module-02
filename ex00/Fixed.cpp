#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Defaut constructor called" << std::endl;
	this->rawBits = 0;
}
Fixed::Fixed(Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
Fixed::~Fixed() {
	std::cout << "Defaut destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->rawBits = fixed.getRawBits();
	return *this;
}
int Fixed::getRawBits(void) const {
	std::cout << "GetRawBits function called" << std::endl;
	return this->rawBits;
}
void Fixed::setRawBits(int const data) {
	std::cout << "SetRawBits called" << std::endl;
	this->rawBits = data;
}
