/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:00:33 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/18 13:09:56 by brandebr         ###   ########.fr       */
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
