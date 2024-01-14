/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Command.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 19:09:33 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 19:27:23 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <iostream>
#include <map>

class Command
{
	protected:
		int											_id;
		std::string									_date;
		std::string									_client;
		std::map<std::string, int>					_articles;
	public:
		Command() {}
		Command(int id, const std::string& date, const std::string& client) {
			_id = id;
			_date = date;
			_client = client;
		}
		
		int					get_total_price() {
			int	total_price = 0;
			for (std::map<std::string, int>::iterator it = _articles.begin(); it != _articles.end(); it++)
				total_price += it->second;
			return total_price;
		}
		
		int					get_id() const {
			return _id;
		}
		
		void				set_id(int id) {
			_id = id;
		}
		
		const std::string	&get_date() const {
			return _date;
		}
		
		void				set_date(const std::string& date) {
			_date = date;
		}
		
		const std::string	&get_client() const {
			return _client;
		}
		
		void				set_client(const std::string& client) {
			_client = client;
		}
		
		void				add_article(const std::string &name, int price) {
			_articles.insert(std::make_pair(name, price));
		}
		
		void				delete_article(const std::string &name) {
			_articles.erase(name);
		}
		
		~Command() {}
};

#endif