/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Workshop.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:21:36 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 17:21:37 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Workshop.hpp"

template <class T>
Workshop<T>::Workshop() {}

template <class T>
void    Workshop<T>::registerWorker(Worker *w) {
    if (w != NULL) {
        for (std::set<Tool *>::iterator it = w->tools.begin() it != w->tools.end(); it++) {
            if (dynamic_cast<T *> (*it)) {
                w->registerToWorkshop(this);
                workers.insert(std::make_pair(w, *it));
            }
        }
    }
}

template <class T>
void    Workshop<T>::unregisterWorker(Worker *w) {
    std::map<Worker *, T *>  it = workers.find(w);
    if (w != NULL && it != workers.end()) {
        w->unregisterFromWorkshop(this);
        workers.erase(it);
    }
}

template <class T>
void    Workshop<T>::executeWorkDay() {
    for (std::map<Worker *, T *> it = workers.begin(); it != workers.end(); it++) {
        it->first->work(it->second);
    }
}

template <class T>
Workshop<T>::~Workshop() {}
