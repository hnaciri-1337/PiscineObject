/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:37:53 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/01 21:09:39 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKER_HPP
#define WORKER_HPP

#include "Position.hpp"
#include "Statistic.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"
#include <unordered_set>

template <class T>
class	Workshop;

class Worker
{
	private:
		std::string								name;
		Position								coordonnee;
		Statistic   							stat;
		std::unordered_set<Tool *>				tools;
		std::unordered_set<Workshop<Tool> *>	workshops;
		void	work (Tool *);
		void	registerToWorkshop (Workshop<Tool> *);
		void	unregisterFromWorkshop (Workshop<Tool> *);
		friend	class Tool;
		friend	class Workshop<Tool>;
	public:
		Worker();
		Worker(std::string, int, int, int, int, int);
		int			getLevel() const;
		std::string	getName() const;
		std::string	getPosition() const;
		void		takeTool (Tool *);
		void		removeTool (Tool *);
		void		printInfo();
		template <typename T>
		T*			getTool() const;
		~Worker();
};

#endif
