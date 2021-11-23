#include "Fixed.hpp"

Fixed::Fixed() {}
Fixed::Fixed(Fixed& copy) {
	this->rawBits = copy.getRawBits();
}
Fixed::~Fixed() {}

Fixed& Fixed::operator= (const Fixed& fixed) {
	this->rawBits = fixed.getRawBits();
	return *this;
}
int Fixed::getRawBits(void) const {
	return this->rawBits;
}
void Fixed::setRawBits(int const data) {
	this->rawBits = data;
}
