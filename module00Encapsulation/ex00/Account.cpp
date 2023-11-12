/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 21:03:33 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/12 16:57:34 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int id, float value, Bank &bankRe): bankRef(bankRe) {
	this->id = id;
	this->value = value;
}

Account::Account(int id, Bank &bankRe): bankRef(bankRe) {
	this->id = id;
	this->value = 0;
}

void	Account::makeTransfer(float value) {
	this->bankRef.transfer(this, value);
}

float	Account::makeWithdrawal(float value) {
	return this->bankRef.withdrawal(this, value);
}

float	Account::askForLoan(float value) {
	return this->bankRef.loan(this, value);
}

float	Account::deleteMyAccount() {
	return this->bankRef.deleteAccount(this);
}

float	Account::getValue() {
	return value;
}

int	Account::getId() {
	return id;
}

Account::~Account() {}

std::ostream & operator<<(std::ostream &os, Account &src) {
	os << "[" << src.getId() << "] - [" << src.getValue() << "]";
	return (os);
}
