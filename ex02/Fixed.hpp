#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
public:
	Fixed();
	Fixed(Fixed& copy);
	Fixed(const float data);
	Fixed(const int data);
	~Fixed();

	Fixed& operator= (const Fixed& fixed);
	Fixed& operator++(void);
	Fixed  operator++(int);
	Fixed& operator--(void);
	Fixed  operator--(int);

	Fixed  operator+(const Fixed& rhs) const;
	Fixed  operator-(const Fixed& rhs) const;
	Fixed  operator*(const Fixed& rhs) const;
	Fixed  operator/(const Fixed& rhs) const;

	bool operator== (const Fixed& rhs) const;
	bool operator!= (const Fixed& rhs) const;
	bool operator> (const Fixed& rhs) const;
	bool operator>= (const Fixed& rhs) const;
	bool operator< (const Fixed& rhs) const;
	bool operator<= (const Fixed& rhs) const;

	int  getRawBits(void) const;
	void setRawBits(int const data);
	int  toInt(void) const;
	float toFloat(void) const;

	static Fixed& min(Fixed& lhs, Fixed& rhs);
	static Fixed& max(Fixed& lhs, Fixed& rhs);

	static const Fixed& min(const Fixed& lhs, const Fixed& rhs);
	static const Fixed& max(const Fixed& lhs, const Fixed& rhs);

private:
	int rawBits;
	static const int fractionalBits = 8;
};
std::ostream& operator<< (std::ostream& os, const Fixed& fixed);

#endif
