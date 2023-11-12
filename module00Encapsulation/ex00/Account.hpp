/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 20:46:54 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 19:28:23 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ACCOUNT_HPP
#define	ACCOUNT_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <map>
# include <iterator>
# include <string>
# include "Bank.hpp"

class Account
{
	private:
		int		id;
		float	value;
		Bank	&bankRef;
		Account();
		Account(Account const &src);
		Account(int id, Bank &bank);
		Account(int id, float value, Bank &bank);
		Account &operator= (Account const &src);
		friend Account	&Bank::createAccount(float value);
    	friend void		Bank::transfer(Account *acc, float value);
    	friend float	Bank::withdrawal(Account *acc, float value);
    	friend float	Bank::loan(Account *acc, float value);
		friend float	Bank::deleteAccount(Account *acc);
		friend Bank::~Bank();
	public:
		void	makeTransfer(float value);
		float	makeWithdrawal(float value);
		float	askForLoan(float value);
		float	deleteMyAccount();
		float	getValue(void);
		int		getId(void);
		~Account();
};

std::ostream & operator<<(std::ostream &os, Account &src);

#endif

