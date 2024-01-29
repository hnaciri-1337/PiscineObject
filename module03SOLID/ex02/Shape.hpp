/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shape.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:15:06 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/19 12:02:02 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape
{
	public:
		Shape() {}
		virtual double	getArea() = 0;
		virtual double	getPerimeter() = 0;
		virtual ~Shape() {}
};

#endif
