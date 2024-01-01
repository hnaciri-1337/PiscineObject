/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Shovel.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:02:55 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:55:21 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include <iostream>
#include "Tool.hpp"

class Shovel: public Tool
{
	private:
		void    use();
	public:
		Shovel();
		~Shovel();
};

#endif
