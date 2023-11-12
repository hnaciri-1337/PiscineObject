/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bank.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:57:04 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 18:17:37 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bank.hpp"
#include "Account.hpp"

Bank::Bank() {
	liquidity = 0;
}

Bank::Bank(float liquidity) {
	this->liquidity = liquidity;
}

void	Bank::transfer(Account *acc, float value) {
	std::map<int, Account *>::iterator it = clients.find(acc->id);
	if (it != clients.end()) {
		if (it->second == acc) {
			float	profit = (value * 5) / 100;
			liquidity += profit;
			acc->value += value - profit;
			return ;
		}
		throw std::runtime_error("Account not found");
	}
	throw std::runtime_error("Account not found");
}

float	Bank::withdrawal(Account *acc, float value) {
	std::map<int, Account *>::iterator it = clients.find(acc->id);
	if (it != clients.end()) {
		if (it->second == acc) {
			if (acc->value >= value) {
				acc->value -= value;
				return value;
			}
			throw std::runtime_error("Account don't have enough money");
		}
		throw std::runtime_error("Account not found");
	}
	throw std::runtime_error("Account not found");
}

float	Bank::loan(Account *acc, float value) {
	std::map<int, Account *>::iterator it = clients.find(acc->id);
	if (it != clients.end()) {
		if (it->second == acc) {
			if (value < liquidity) {
				liquidity -= value;
				acc->value += value;
				loanClients.insert(acc->id);
				return value;
			}
			throw std::runtime_error("Bank don't have enough liquidity");
		}
		throw std::runtime_error("Account not found");
	}
	throw std::runtime_error("Account not found");
}

Account	&Bank::createAccount(float value) {
	Account	*acc;

	if(!clients.empty())
		acc = new Account((--clients.end())->first + 1, value, *this);
	else
		acc = new Account(0, value, *this);
	clients.insert(std::make_pair(acc->id, acc));
	return *acc;
}

float	Bank::deleteAccount(Account *acc) {
	float	value = 0;
	std::map<int, Account *>::iterator it = clients.find(acc->id);
	if (it != clients.end()) {
		if (it->second == acc) {
			if (loanClients.find(acc->id) == loanClients.end()) {
				value = acc->value;
				delete acc;
				clients.erase(it->first);
				return value;
			}
			throw std::runtime_error("Account Should pay loans first");
		}
		throw std::runtime_error("Account not found");
	}
	throw std::runtime_error("Account not found");
}

Account	&Bank::operator[](int id) {
	if (clients.find(id) != clients.end())
		return *clients[id];
	throw std::runtime_error("Account not found");
}

Bank::~Bank() {
	for (std::map<int, Account *>::iterator it = clients.begin(); it != clients.end(); it++)
		delete it->second;
	clients.clear();
	loanClients.clear();	
}

std::ostream & operator<<(std::ostream &os, Bank &src) {
	os << "Bank informations : " << std::endl;
	os << "Liquidity : " << src.liquidity << std::endl;
	for (std::map<int, Account *>::iterator it = src.clients.begin(); it != src.clients.end(); it++)
		os << *(it->second) << std::endl;
	return os;
}
