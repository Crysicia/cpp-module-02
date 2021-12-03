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

Fixed::~Fixed() { }

Fixed& Fixed::operator= (const Fixed& fixed) {
	this->rawBits = fixed.getRawBits();
	return *this;
}

Fixed& Fixed::operator++(void) {
	this->rawBits++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed old(*this);
	operator++();
	return old;
}

Fixed& Fixed::operator--(void) {
	this->rawBits--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed old(*this);
	operator--();
	return old;
}

Fixed  Fixed::operator+(const Fixed& rhs) const {
	Fixed result;
	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return result;
}

Fixed  Fixed::operator-(const Fixed& rhs) const {
	Fixed result;
	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return result;
}

Fixed  Fixed::operator*(const Fixed& rhs) const {
	Fixed result;
	result.setRawBits((this->getRawBits() * rhs.getRawBits()) >> this->fractionalBits);
	return result;
}

Fixed  Fixed::operator/(const Fixed& rhs) const {
	Fixed result;
	result.setRawBits((this->getRawBits() / rhs.getRawBits()) << this->fractionalBits);
	return result;
}

bool Fixed::operator== (const Fixed& rhs) const {
	return this->getRawBits() == rhs.getRawBits();
}

bool Fixed::operator!= (const Fixed& rhs) const {
	return !(*this == rhs);
}

bool Fixed::operator> (const Fixed& rhs) const {
	return this->getRawBits() > rhs.getRawBits();
}

bool Fixed::operator< (const Fixed& rhs) const {
	return this->getRawBits() < rhs.getRawBits();
}

bool Fixed::operator>= (const Fixed& rhs) const {
	return this->getRawBits() >= rhs.getRawBits();
}

bool Fixed::operator<= (const Fixed& rhs) const {
	return this->getRawBits() <= rhs.getRawBits();
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

// ---- Static methods
Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}
