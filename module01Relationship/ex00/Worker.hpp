/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:37:53 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:54:47 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
#define WORKER_HPP

#include "Position.hpp"
#include "Statistic.hpp"
#include "Shovel.hpp"
#include <set>

class Worker
{
	private:
		Position			coordonnee;
		Statistic   		stat;
		std::set<Tool *>	tools;
		friend	class Tool;
	public:
		Worker();
		void	takeTool (Tool *s);
		void	removeTool (Tool *s);
		~Worker();
};

#endif
