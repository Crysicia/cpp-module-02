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
	friend std::ostream& operator<< (std::ostream& os, const Fixed& fixed);

	int getRawBits(void) const;
	void setRawBits(int const data);
	int toInt(void) const;
	float toFloat(void) const;

private:
	int rawBits;
	static const int fractionalBits = 8;
};

#endif
