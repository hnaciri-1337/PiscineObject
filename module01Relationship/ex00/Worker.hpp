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
#include <set>

template <class T>
class	Workshop;

class	BaseWorkshop;

class Worker
{
	private:
		std::string								name;
		Position								coordonnee;
		Statistic   							stat;
		std::set<Tool *>				tools;
		std::set<BaseWorkshop *>	workshops;
		void	work (Tool *);
		template <class T>
		void	registerToWorkshop (Workshop<T> *w) {
			if (w != NULL)
				workshops.insert(w);
		}
		template <class T>
		void	unregisterFromWorkshop (Workshop<T> *w) {
			if (w != NULL)
				workshops.erase(w);
		}
		friend	class Tool;
		template <class T>
		friend	class Workshop;
	public:
		Worker();
		Worker(std::string, int, int, int, int, int);
		int			getLevel() const;
		std::string	getName() const;
		std::string	getPosition() const;
		void		takeTool (Tool *);
		void		removeTool (Tool *);
		void		printInfo();
		template <class T>
		T			*getTool() {
			for (std::set<Tool *>::iterator it = tools.begin(); it != tools.end(); it++) {
				T	*ret = dynamic_cast<T *> (*it);
				if (ret)
					return ret;
			}
			return nullptr;
		}
		~Worker();
};

#endif
