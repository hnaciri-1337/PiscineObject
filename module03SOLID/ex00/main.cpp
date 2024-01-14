/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 16:33:30 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/14 16:36:55 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Car.hpp"

int	main() {
	Car	car;

	car.engine.start();
	car.transmission.shift_gears_up();
	car.acceleration.accelerate(10);
	car.transmission.shift_gears_up();
	car.acceleration.accelerate(30);
	car.transmission.shift_gears_up();
	car.acceleration.accelerate(50);
	car.transmission.shift_gears_up();
	car.acceleration.accelerate(70);
	car.transmission.shift_gears_up();
	car.transmission.shift_gears_up();
	car.acceleration.accelerate(150);
	car.acceleration.apply_force(40);
	car.acceleration.apply_emergency_force();
	car.engine.stop();
}
