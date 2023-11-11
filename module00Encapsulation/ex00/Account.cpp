/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:03:33 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/11 16:55:36 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int id, int value, Bank &bankRe): bankRef(bankRe) {
	this->id = id;
	this->value = value;
}

Account::Account(int id, Bank &bankRe): bankRef(bankRe) {
	this->id = id;
	this->value = 0;
}

void	Account::makeTransfer(int value) {
	this->bankRef.transfer(this->id, value);
}

int	Account::getValue() {
	return value;
}

int	Account::getId() {
	return id;
}

Account::~Account() {}

std::ostream & operator<<(std::ostream &os, Account &src) {
	os << "[]" << src.getId() << "] - [" << src.getValue() << "]";
	return (os);
}
