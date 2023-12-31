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

Workshop::Workshop() {}

void    Workshop::registerWorker(Worker *w) {
    if (w != NULL) {
        for (std::set<Tool *>::iterator it = w->tools.begin() it != w->tools.end(); it++) {
            if (dynamic_cast<T *> (*it)) {
                Worker.registerToWorkshop(this);
            }
        }
    }
}

Workshop::~Workshop() {}
