/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasal <dasal@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 09:04:33 by dasal             #+#    #+#             */
/*   Updated: 2024/08/20 09:04:36 by dasal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* zombie = NULL;
	
	zombie = zombie->newZombie("Karl");
	zombie->randomChump("Thomas");
	delete zombie;
	return 0;
}
