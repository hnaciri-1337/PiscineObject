/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:15:09 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/11 16:58:59 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANK_HPP
#define BANK_HPP

#include "Account.hpp"

class Bank
{
private:
    int liquidity;
	std::map<int, Account *> clients;
    Bank(Bank const &src);
    Bank &operator= (Bank const &src);
public:
    Bank();
    Bank(int liquidity);
    void    transfer(int id, int value);
    ~Bank();
};

#endif
