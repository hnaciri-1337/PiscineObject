/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PackageReductionDiscountCommand.hpp                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:25:17 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 19:36:07 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP
#define PACKAGE_REDUCTION_DISCOUNT_COMMAND_HPP

#include "Command.hpp"

class PackageReductionDiscountCommand: public Command
{
	public:
		PackageReductionDiscountCommand();
		PackageReductionDiscountCommand(int id, const std::string& date, const std::string& client) : Command(id, date, client) {}

		int	get_total_price() {
			int	total_price = Command::get_total_price();
			return (total_price >= 150) ? total_price - 10 : total_price;
		}
		~PackageReductionDiscountCommand();
};

#endif
