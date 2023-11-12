/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:15:09 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 16:38:36 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BANK_HPP
#define BANK_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <map>
# include <set>
# include <iterator>

struct Account;

struct Bank
{
	private:
		float liquidity;
		std::map<int, Account *> clients;
		std::set<int> loanClients;
		Bank(Bank const &src);
		Bank &operator= (Bank const &src);
	public:
		Bank();
		Bank(float liquidity);
		Account	&createAccount(float value = 0);
		void    transfer(Account *acc, float value);
		float	withdrawal(Account *acc, float value);
		float	loan(Account *acc, float value);
		float	deleteAccount(Account *acc);
		Account	&operator[](int id);
		~Bank();
		friend std::ostream & operator<<(std::ostream &os, Bank &src);
};

std::ostream & operator<<(std::ostream &os, Bank &src);

#endif
