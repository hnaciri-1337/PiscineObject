/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Steering.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 15:54:20 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 16:31:26 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STEERING_HPP
#define STEERING_HPP

#include <iostream>

class Steering
{
	private:
		double  _angle;
	public:
		Steering() {
			_angle = 0;
		}
		void	turn_wheel(double angle) {
			_angle += angle;
			_angle = std::min(_angle, 90.00);
			_angle = std::max(_angle, -90.00);

			std::cout << "Wheel degree: " << _angle << std::endl;
		}
		void	straighten_wheels() {
			_angle = 0;
			std::cout << "Wheel degree: " << _angle << std::endl;
		}
		~Steering() {
		}
};

#endif
