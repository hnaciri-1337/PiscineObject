/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Transmission.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:45:58 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 16:32:39 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TRANSMISSION_HPP
#define TRANSMISSION_HPP

#include <iostream>

class Transmission
{
	private:
		int	_gear;
	public:
		Transmission() {
			_gear = 0;
		}
		void	shift_gears_up() {
			_gear += 1;
			std::min(_gear, 6);

			std::cout << "Gear is on level: " << _gear << " now !" << std::endl;
		}
		void	shift_gears_down() {
			_gear -= 1;
			std::max(_gear, 0);

			std::cout << "Gear is on level: " << _gear << " now !" << std::endl;
		}
		void	reverse() {
			_gear = -1;
			std::cout << "Gear is on level: " << _gear << " now !" << std::endl;
		}
		~Transmission() {}
};

#endif
