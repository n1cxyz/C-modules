#include "Fixed.hpp"

/* class Fixed {
	public:
		Fixed ();
		Fixed (const Fixed &fixed);
		Fixed& operator=(const Fixed &fixed);
		~Fixed ();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
	private:
		int					rawBits;
		static const int	fractionalBits;
}; */

Fixed::Fixed() {
	this->rawBits = 0;
	std::cout << "Default constructor called" << "\n";
};

Fixed::Fixed(const Fixed& fixed) {
	std::cout << "Copy constructor called" << "\n";
	this->rawBits = fixed.getRawBits();
};

Fixed& Fixed::operator=(const Fixed &fixed) {
	if (this == &fixed) {
		return *this;
	}
	std::cout << "Copy assignment operator called" << "\n";
	this->rawBits = fixed.getRawBits();
	return *this;
};

Fixed::~Fixed() {
	std::cout << "Destructor called" << "\n";
};

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << "\n";
	return this->rawBits;
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << "\n";
	this->rawBits = raw;
}