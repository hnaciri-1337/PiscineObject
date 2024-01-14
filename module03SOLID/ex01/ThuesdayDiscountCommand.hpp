/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ThuesdayDiscountCommand.hpp                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:25:17 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 19:36:44 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef THUESDAY_DISCOUNT_COMMAND_HPP
#define THUESDAY_DISCOUNT_COMMAND_HPP

#include "Command.hpp"

class ThuesdayDiscountCommand: public Command
{
	public:
		ThuesdayDiscountCommand() {}
		ThuesdayDiscountCommand(int id, const std::string& date, const std::string& client) : Command(id, date, client) {}
		int	get_total_price() {
			return Command::get_total_price() * 0.9;
		}
		~ThuesdayDiscountCommand() {}
};

#endif
