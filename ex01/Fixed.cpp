#include "Fixed.hpp"

// ---- Default constructors and operators overloading
Fixed::Fixed() {
	this->rawBits = 0;
}

Fixed::Fixed(Fixed& copy) {
	*this = copy;
}

Fixed::Fixed(const float data) {
	this->rawBits = roundf(data * (1 << this->fractionalBits));
}

Fixed::Fixed(const int data) {
	this->rawBits = data << this->fractionalBits;
}

Fixed::~Fixed() {
	std::cout << "Defaut destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& fixed) {
	this->rawBits = fixed.getRawBits();
	return *this;
}

std::ostream& operator<< (std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return os;
}

// ---- Public methods
int Fixed::getRawBits(void) const {
	return this->rawBits;
}

void Fixed::setRawBits(int const data) {
	this->rawBits = data;
}

int Fixed::toInt(void) const {
	return this->rawBits >> this->fractionalBits;
}

float Fixed::toFloat(void) const {
	return (float)this->rawBits / (float)(1 << this->fractionalBits); 
}
