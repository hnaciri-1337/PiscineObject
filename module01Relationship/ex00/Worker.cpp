/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Worker.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:21:30 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:57:09 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Worker.hpp"
#include "Workshop.hpp"

Worker::Worker() {}

void	Worker::registerToWorkshop (Workshop *w) {
	if (w != NULL)
		workshops.insert(w);
}

void	Worker::takeTool (Tool *s) {
	if (s != NULL) {
		s->freeTool();
		tools.insert(s);
		s->user = this;
	}
}

void	Worker::removeTool (Tool *s) {
	if (s != NULL)
		tools.erase(s);
}

Worker::~Worker() {}
