/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 12:07:21 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/16 14:39:03 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
	: _number(0) {
		std::cout << "Default constructor called" << std::endl; 
	}

Fixed::Fixed(const Fixed &copy)
	: _number(copy._number) {

		std::cout << "Copy constructor called" << std::endl; 
		copy.getRawBits();
	//	std::cout << "Copy assignment operator called" << std::endl;
	}

Fixed& Fixed::operator=(const Fixed &copy) {
	if (this != &copy) {
		_number = copy._number;
	}
	std::cout << "Copy assignment operator called" << std::endl; 
		copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return _number;
	//return (this->_number);
}

void Fixed::setRawBits(int const raw) {
	_number = raw;
	//this->_number = raw;
}

