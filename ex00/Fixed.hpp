#ifndef FIXED_H
# define FIXED_H

class Fixed {
public:
	Fixed();
	Fixed(Fixed& copy);
	~Fixed();
	Fixed& operator = (const Fixed& fixed);

private:
	int fixedPointValue;
	static const int fractionalBits = 8;
};

#endif
