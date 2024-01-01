/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hammer.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 15:02:55 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:58:36 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HAMMER_HPP
#define HAMMER_HPP

#include <iostream>
#include "Tool.hpp"

class Hammer: public Tool
{	
	private:
		void    use();
	public:
		Hammer();
		~Hammer();
};

#endif
