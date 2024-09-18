/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:22:21 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/18 14:04:09 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) 
	: _x(0), _y(0) {}


Point::Point(const float x, const float y) 
	: _x(x), _y(y) {}

Point::Point(const Point &copy) 
	: _x(copy.getX()), _y(copy.getY()) {}

Point& Point::operator=(const Point &copy) {
	if (this != &copy) {
		const_cast<Fixed&>(_x) = copy.getX();
		const_cast<Fixed&>(_y) = copy.getY();
	}
	return *this;
}

Point::~Point() {}

Fixed Point::getX( void ) const {
	return _x;
}
	
Fixed Point::getY( void ) const {
	return _y;
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "Point (" << point.getX() << ", " << point.getY() << ")";
    return os;
}
