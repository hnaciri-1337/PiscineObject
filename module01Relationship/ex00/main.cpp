/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnaciri- <hnaciri-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:29:39 by hnaciri-          #+#    #+#             */
/*   Updated: 2024/01/01 21:14:05 by hnaciri-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Shovel.hpp"
#include "Hammer.hpp"
#include "Worker.hpp"
#include "Workshop.hpp"

Tool		*generateRandomTool()
{
    int r = rand() % 2;
    if (r == 0)
        return new Hammer();
    return new Shovel();
}

std::string	identify(Tool * p)
{
    if ((dynamic_cast<Shovel*>(p)))
        return "Shovel";
    else if ((dynamic_cast<Hammer*>(p)))
        return "Hammer";
	else
		return "Unknown";
}

int     main()
{
	srand(time(0));
	{
		Worker	wA("WorkerA", 5, 1300, 3, 4, 5);
		Worker 	wB("WorkerB", 3, 830, 1, 2, 3);
		Tool	*tA = generateRandomTool();
		Tool	*tB = generateRandomTool();


		std::cout << "A :" << identify(tA) << std::endl; 
		std::cout << "B :" << identify(tB) << std::endl;


		wA.takeTool(tA);
		wA.takeTool(tB);

		wA.printInfo();
		wB.printInfo();

		wB.takeTool(tB);

		wA.printInfo();
		wB.printInfo();

		delete tA;
		delete tB;
	}

	{
		Worker	wA("WorkerA", 5, 1300, 3, 4, 5);
		Worker 	wB("WorkerB", 3, 830, 1, 2, 3);

		Tool	*sA = new Shovel();
		Tool	*sB = new Shovel();
		Tool	*hA = new Hammer();
		Tool	*hB = new Hammer();

		Workshop<Shovel>	shovelWorkshop;
		// Workshop<Hammer>	hammerWorkshop;

		wA.takeTool(sA);
		wA.takeTool(hA);
		wB.takeTool(sB);
		wB.takeTool(hB);

		shovelWorkshop.registerWorker(&wA);
		// hammerWorkshop.registerWorker(&wA);
		shovelWorkshop.registerWorker(&wA);
		// hammerWorkshop.registerWorker(&wB);
		
		shovelWorkshop.executeWorkDay();
		// hammerWorkshop.executeWorkDay();

		wA.takeTool(sB);
		shovelWorkshop.executeWorkDay();
		// hammerWorkshop.executeWorkDay();
		
		wB.takeTool(sB);
		shovelWorkshop.executeWorkDay();
		// hammerWorkshop.executeWorkDay();
	}
}