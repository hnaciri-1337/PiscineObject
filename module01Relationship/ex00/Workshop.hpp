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

#include <unordered_map>
#include "Worker.hpp"

class BaseWorkshop {
	public:
		virtual void	registerWorker(Worker *w) = 0;
		virtual void	unregisterWorker(Worker *w) = 0;
		virtual void	cleanWorkshop(Worker *w) = 0;
		virtual ~BaseWorkshop() {}
};

template <class T>
class Workshop : public BaseWorkshop
{
	private:
		std::unordered_map<Worker *, T *>	workers;
	public:
		Workshop() {}
		void	registerWorker(Worker *w) {
			if (w != NULL) {
				T	*ptr = w->getTool<T> ();
				if (ptr != nullptr) {
					w->registerToWorkshop(this);
					workers.insert(std::make_pair(w, ptr));
				}
			}
		}
		void	unregisterWorker(Worker *w) {
			if (w != NULL) {
				typename std::unordered_map<Worker *, T *>::iterator  it = workers.find(w);
				if (it != workers.end()) {
					w->unregisterFromWorkshop(this);
					workers.erase(it);
				}
			}
		}
		void	cleanWorkshop(Worker *w) {
			if (w != NULL) {
				T	*ptr = w->getTool<T> ();
				if (ptr == nullptr) {
					unregisterWorker(w);
				} else {
					workers[w] = ptr;
				}
			}
		}
		void	executeWorkDay() {
			for (typename std::unordered_map<Worker *, T *>::iterator it = workers.begin(); it != workers.end(); it++) {
				it->first->work(it->second);
			}
		}
		~Workshop() {}
};

#endif
