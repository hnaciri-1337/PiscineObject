/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EmployeeManagement.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:51:57 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/29 17:29:49 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EMPLOYEE_MANAGEMENT_HPP
#define EMPLOYEE_MANAGEMENT_HPP
#include <set>
#include <iostream>

class	Employee;

class EmployeeManager
{
	private:
		std::set<Employee *>	employees;
	public:
		EmployeeManager() {}
		void	addEmployee(Employee *e) {
			if (e)
				employees.insert(e);
		}
		void	removeEmployee(Employee *e) {
			if (e)
				employees.erase(e);
		}
		void	executeWorkday() {
			for (std::set<Employee *>::iterator it = employees.begin(); it != employees.end(); it++)
				it->executeWorkday();
		}
		void	calculatePayroll() {
			
		}
		~EmployeeManager() {}
};

#endif