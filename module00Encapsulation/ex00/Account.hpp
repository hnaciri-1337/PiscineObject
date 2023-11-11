/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:46:54 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/11 16:53:29 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ACCOUNT_HPP
#define	ACCOUNT_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <map>
# include <iterator>
# include "Bank.hpp"

class Account
{
	private:
		int		id;
		int		value;
		Bank	&bankRef;
		Account();
		Account(Account const &src);
		Account &operator= (Account const &src);
	public:
		Account(int id, Bank &bank);
		Account(int id, int value, Bank &bank);
		void	makeTransfer(int value);
		int		getValue(void);
		int		getId(void);
		~Account();
};

std::ostream & operator<<(std::ostream &os, Account &src);

#endif

