/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Statistic.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:36:13 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 14:37:11 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STATISTIC_HPP
#define STATISTIC_HPP

struct Statistic
{
    private:
        int level;
        int exp;
    public:
        void	setLevel (int &);
		void	setExp (int &);
		int		getLevel (void) const;
		int		getExp (void) const;
};

#endif
