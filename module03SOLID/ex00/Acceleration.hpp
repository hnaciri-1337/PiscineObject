/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acceleration.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:21:50 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 16:29:40 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACCELERATION_HPP
#define ACCELERATION_HPP

#include <iostream>

class Acceleration
{
	private:
		double	_speed;
	public:
		Acceleration() {
			_speed = 0;
		}
		void	accelerate(double speed) {
			_speed = speed;
			_speed = std::max(_speed, 0.00);
			_speed = std::min(_speed, 120.00);

			std::cout << "Current speed: " << _speed << std::endl;
		}
		void	apply_force(double force) {
			_speed -= force;
			_speed = std::max(_speed, 0.00);
			_speed = std::min(_speed, 120.00);

			std::cout << force << " applied on brakes" << std::endl;
			std::cout << "Current speed: " << _speed << std::endl;
		}
		void	apply_emergency_force() {
			_speed = 0;
			std::cout << "Emergency force applied" << std::endl;
			std::cout << "Current speed: " << _speed << std::endl;
		}
		~Acceleration() {}
};

#endif
