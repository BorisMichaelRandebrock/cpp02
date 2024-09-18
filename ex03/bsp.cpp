/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:00:33 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/18 18:53:27 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool ret = false;

	if ((a.getY() > point.getY()) != (b.getY() > point.getY()))
	{
		if (((b.getX() - a.getX()) * ((point.getY() - a.getY()) / (b.getY() - a.getY())) + a.getX()) >= point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	if ((a.getY() > point.getY()) != (c.getY() > point.getY()))
	{
		if (((c.getX() - a.getX()) * ((point.getY() - a.getY()) / (c.getY() - a.getY())) + a.getX()) >= point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	if ((b.getY() > point.getY()) != (c.getY() > point.getY()))
	{
		if (((c.getX() - b.getX()) * ((point.getY() - b.getY()) / (c.getY() - b.getY())) + b.getX()) >= point.getX())
		{
			if (ret)
				ret = false;
			else
				ret = true;
		}
	}
	return (ret);
}

/*
bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    // Calculate vectors
    Fixed v0x = b.getX() - a.getX();
    Fixed v0y = b.getY() - a.getY();
    Fixed v1x = c.getX() - a.getX();
    Fixed v1y = c.getY() - a.getY();
    Fixed v2x = point.getX() - a.getX();
    Fixed v2y = point.getY() - a.getY();

    // Calculate dot products
    Fixed dot00 = v0x * v0x + v0y * v0y;
    Fixed dot01 = v0x * v1x + v0y * v1y;
    Fixed dot02 = v0x * v2x + v0y * v2y;
    Fixed dot11 = v1x * v1x + v1y * v1y;
    Fixed dot12 = v1x * v2x + v1y * v2y;

    // Calculate barycentric coordinates
    Fixed invDenom = Fixed(1) / (dot00 * dot11 - dot01 * dot01);
    Fixed u = (dot11 * dot02 - dot01 * dot12) * invDenom;
    Fixed v = (dot00 * dot12 - dot01 * dot02) * invDenom;

    // Debugging output
    std::cout << "dot00: " << dot00 << ", dot01: " << dot01 << ", dot02: " << dot02 << std::endl;
    std::cout << "dot11: " << dot11 << ", dot12: " << dot12 << std::endl;
    std::cout << "invDenom: " << invDenom << std::endl;
    std::cout << "u: " << u << ", v: " << v << std::endl;

    // Check if point is in triangle
    return (u >= Fixed(0) && v >= Fixed(0) && (u + v <= Fixed(1)));
}*/
