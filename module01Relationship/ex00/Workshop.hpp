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

# ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

class Worker;

template <class T>
class Workshop
{
	private:
		std::map<Worker *, T *>	workers;
	public:
		Workshop();
		void	registerWorker(Worker *);
		void	unregisterWorker(Worker *);
		void	executeWorkDay();
		~Workshop();
};

# endif
