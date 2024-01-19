/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rectangle.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:16:57 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/19 11:58:32 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "Shape.hpp"

class Rectangle: public Shape
{
	private:
		double  height;
		double  width;
	public:
		Rectangle(): height(0), width(0) {}
		Rectangle(double h, double w) : height(h), width(w) {}
		double	getArea() {
			return height * width;
		}
		double	getPerimeter() {
			return (height * 2) + (width * 2);
		}
		~Rectangle() {}
};

#endif