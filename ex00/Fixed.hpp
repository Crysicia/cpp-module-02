#ifndef FIXED_H
# define FIXED_H

class Fixed {
public:
	Fixed();
	Fixed(Fixed& copy);
	~Fixed();
	Fixed& operator= (const Fixed& fixed);

	int getRawBits(void) const;
	void setRawBits(int const data);

private:
	int rawBits;
	static const int fractionalBits = 8;
};

#endif
