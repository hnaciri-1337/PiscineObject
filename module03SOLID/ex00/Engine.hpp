/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Engine.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 12:35:33 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 16:12:52 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <iostream>

class Engine
{
	private:
		bool	_is_on;
	public:
		Engine() {
			_is_on = false;
		}
		void	start() {
			_is_on = true;
			std::cout << "Engine on" << std::endl;
		}
		void	stop() {
			_is_on = false;
			std::cout << "Engine off" << std::endl;
		}
		~Engine() {}
};

#endif
