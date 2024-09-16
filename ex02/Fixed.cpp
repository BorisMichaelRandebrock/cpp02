/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:07:21 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/16 18:43:01 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
	: _number(0) {
//		std::cout << "Default constructor called" << std::endl; 
	}

Fixed::Fixed(const int number)
	: _number(number << _bits) {
//		std::cout << "Int constructor called" << std::endl; 
	}

Fixed::Fixed(const float  bits)
	: _number(static_cast<int>(roundf(bits * (1 << _bits)))) {
//		std::cout << "Float constructor called" << std::endl; 
	}

Fixed::Fixed(const Fixed &copy)
	: _number(copy._number) {

//		std::cout << "Copy constructor called" << std::endl; 
	//	copy.getRawBits();
	}

Fixed& Fixed::operator=(const Fixed &copy) {
	if (this != &copy) {
		_number = copy._number;
	}
//	std::cout << "Copy assignment operator called" << std::endl; 
	//copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
//	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
//	std::cout << "getRawBits member function called" << std::endl;
	return _number;
	//return (this->_number);
}

void Fixed::setRawBits(int const raw) {
	_number = raw;
	//this->_number = raw;
}

int Fixed::toInt( void ) const {
	return _number >> _bits;
}

float Fixed::toFloat( void ) const {
	return static_cast <float>(_number) / (1 << _bits); 
}

std::ostream &operator<<(std::ostream &str, Fixed const &fixed_nbr) {
	str << fixed_nbr.toFloat();
	return str;
}

bool Fixed::operator>(const Fixed &copy) const {
	if (this->_number > copy._number) {
		return true;
	}
	return false;
}
bool Fixed::operator<(const Fixed &copy) const {
	if (this->_number < copy._number) {
		return true;
	}
	return false;
}
bool Fixed::operator>=(const Fixed &copy) const {
	if (this->_number >= copy._number) {
		return true;
	}
	return false;
}
bool Fixed::operator<=(const Fixed &copy) const {
	if (this->_number <= copy._number) {
		return true;
	}
	return false;
}
bool Fixed::operator==(const Fixed &copy) const {
	if (this->_number == copy._number) {
		return true;
	}
	return false;
}
bool Fixed::operator!=(const Fixed &copy) const {
	if (this->_number != copy._number) {
		return true;
	}
	return false;
}

Fixed Fixed::operator+(const Fixed &copy) const {
	Fixed result(this->toFloat() + copy.toFloat());
	return result;
}
Fixed Fixed::operator-(const Fixed &copy) const {
	Fixed result(this->toFloat() - copy.toFloat());
	return result;
}
Fixed Fixed::operator*(const Fixed &copy) const {
	Fixed result(this->toFloat() * copy.toFloat());
	return result;
}
Fixed Fixed::operator/(const Fixed &copy) const {
	Fixed result(this->toFloat() / copy.toFloat());
	return result;
}

Fixed &Fixed::operator++(void) {
	this->setRawBits(this->getRawBits() + 1);
	return *this;
}
Fixed &Fixed::operator--(void) {
	this->setRawBits(this->getRawBits() - 1);
	return *this;
}

Fixed Fixed::operator++(int number) {
	Fixed aux;

	aux = *this;
	if (!number) {
		number = 1;
	}
	this->setRawBits(this->getRawBits() + number);
	return aux;
}
Fixed Fixed::operator--(int number) {
	Fixed aux;

	aux = *this;
	if (!number) {
		number = 1;
	}
	this->setRawBits(this->getRawBits() - number);
	return aux;
}

const Fixed &Fixed::min(const Fixed &copy1, const Fixed &copy2) {
	if (copy1 > copy2)
		return copy2;
	return copy1;
}
const Fixed &Fixed::max(const Fixed &copy1, const Fixed &copy2) {
	if (copy1 < copy2)
		return copy2;
	return copy1;
}
