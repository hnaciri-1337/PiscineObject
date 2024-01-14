/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Car.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:18:38 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 16:33:20 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAR_HPP
#define CAR_HPP

#include "Transmission.hpp"
#include "Acceleration.hpp"
#include "Steering.hpp"
#include "Engine.hpp"


class Car {
    public:
        Acceleration    acceleration;
        Transmission	transmission;
        Steering		steering;
        Engine			engine;
};

#endif
