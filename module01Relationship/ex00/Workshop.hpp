/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:21:30 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 17:22:27 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <map>
#include "Worker.hpp"

class BaseWorkshop {
	public:
		virtual bool	registerWorker(Worker *w) = 0;
		virtual bool	unregisterWorker(Worker *w) = 0;
		virtual bool	cleanWorkshop(Worker *w) = 0;
		virtual 		~BaseWorkshop();
};

template <class T>
class Workshop : public BaseWorkshop
{
	private:
		std::map<Worker *, T *>	workers;
	public:
		Workshop() {}
		bool	registerWorker(Worker *w) {
			if (w != NULL) {
				T	*ptr = w->getTool<T> ();
				if (ptr != nullptr) {
					w->registerToWorkshop(this);
					workers.insert(std::make_pair(w, ptr));
					return true;
				}
			}
			return false;
		}
		bool	unregisterWorker(Worker *w) {
			if (w != NULL) {
				typename std::map<Worker *, T *>::iterator  it = workers.find(w);
				if (it != workers.end()) {
					w->unregisterFromWorkshop(this);
					workers.erase(it);
					return true;
				}
			}
			return false;
		}
		bool	cleanWorkshop(Worker *w) {
			if (w != NULL) {
				T	*ptr = w->getTool<T> ();
				if (ptr == nullptr) {
					return unregisterWorker(w);
				}
				workers[w] = ptr;
			}
			return false;
		}
		void	executeWorkDay() {
			for (typename std::map<Worker *, T *>::iterator it = workers.begin(); it != workers.end(); it++) {
				it->first->work(it->second);
			}
		}
		~Workshop() {}
};

#endif
