/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tool.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:44:37 by hnaciri-          #+#    #+#             */
/*   Updated: 2023/11/19 16:56:57 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOL_HPP
#define TOOL_HPP

class   Worker;

class Tool
{
    protected:
        int numberOfUses;
		Worker  *user;
        friend class    Worker;
    public:
		void	freeTool();
        virtual void    use() = 0;
};

#endif
